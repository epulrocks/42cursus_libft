/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:36:17 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/06/04 12:19:43 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		*p = (unsigned char)c;
		p++;
		i++;
	}
	return (s);
}

// This function does not limit n to length of string
// We must be careful to make sure n is less or equal to string length
// Tested with memset <string.h>

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	// char *p;
// 	char *s;
// 	strcpy(s, "testtest");
// 	memset(s, 'a', 100);
// 	printf("%s", s);
// 	return (0);
// }
