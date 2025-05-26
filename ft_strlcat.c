/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:36:01 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/26 01:20:48 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	if (dsize < 1)
		return (slen);
	dlen = ft_strlen(dst);
	if (dsize < dlen)
		dlen = dsize;
	if (dlen < dsize - 1)
	{
		dst += dlen;
		i = dlen;
		while (*src && i < dsize - 1)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	return (dlen + slen);
}
