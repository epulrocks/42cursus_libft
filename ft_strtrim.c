/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:19:17 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/26 14:54:52 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*p;

	start = 0;
	end = ft_strlen(s1);
	p = (char *)s1;
	while (*p)
	{
		if (ft_strchr(set, *p++))
			start += 1;
		else
			break ;
	}
	p = ft_strchr(s1, '\0');
	p--;
	while (*p && end > start)
	{
		if (ft_strchr(set, *p--))
			end -= 1;
		else
			break ;
	}
	return (ft_substr(s1, start, end - start));
}
