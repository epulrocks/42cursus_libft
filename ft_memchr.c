/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:21:46 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/25 11:55:42 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	cc;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		cc = (unsigned char)c;
		if (*p == cc)
			return (p);
		p++;
		i++;
	}
	return (NULL);
}
