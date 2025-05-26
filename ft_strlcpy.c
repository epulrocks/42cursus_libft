/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 03:46:45 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/25 21:58:18 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t		c;
	size_t		i;
	const char	*s;

	s = src;
	if (dsize < 1)
		return (ft_strlen(src));
	else
	{
		c = ft_strlen(src);
		if (c > dsize - 1)
			c = dsize - 1;
	}
	i = 0;
	while (i < c)
	{
		*dst++ = *s++;
		i++;
	}
	if (i < c + 1)
		*dst = '\0';
	return (ft_strlen(src));
}
