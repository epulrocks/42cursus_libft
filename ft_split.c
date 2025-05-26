/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:22:20 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/26 17:47:35 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	char	*p;
	size_t	word_count;
	int		word_flag;

	p = (char *)s;
	word_count = 0;
	word_flag = 0;
	while (*p)
	{
		if (*p++ == c)
		{
			if (word_flag)
			{
				word_count++;	
				word_flag = 0;
			}
		}
		else
			word_flag = 1;
	}
	if (word_flag)
		word_count++;
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**result;
	char	**arptr;
	char	*ptr;
	size_t	start;
	size_t	end;
	int		word_flag;
	// char	*test;

	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	arptr = result;
	ptr = (char *)s;
	start = 0;
	end = 0;
	word_flag = 0;
	while (*ptr)
	{
		if (*ptr == c)
		{
			if (word_flag)
			{
				*arptr++ = ft_substr(s, start, end - start);
				word_flag = 0;
			}
			start = end + 1;
		}
		else
			word_flag = 1;
		ptr++;
		end++;
	}
	if (word_flag)
		*arptr++ = ft_substr(s, start, end - start);
	*arptr = NULL;
	return (result);
}