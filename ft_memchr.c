/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:21:46 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/06/04 12:39:07 by mabdul-r         ###   ########.fr       */
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

// // Scan Memory for a character in first n-th bytes, not limited to s length
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	*test;
// 	char	*p;

// 	// strcpy(test, NULL);
// 	p = memchr(test, 'm', 1000000);
// 	printf("%s", p);
// 	return (0);
// }