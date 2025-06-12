/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:19:17 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/06/12 03:05:04 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start(const char *s, const char *set)
{
	size_t	start;

	start = 0;
	while (*s)
	{
		if (ft_strchr(set, *s++))
			start += 1;
		else
			break ;
	}
	return (start);
}

static size_t	get_end(const char *s, const char *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s);
	s = ft_strchr(s, '\0');
	s--;
	while (*s && end > start)
	{
		if (ft_strchr(set, *s--))
			end -= 1;
		else
			break ;
	}
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = get_start(s1, set);
	end = get_end(s1, set, start);
	return (ft_substr(s1, start, end - start));
}
