/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:47:20 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/06/04 12:20:49 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	// char *p;
// 	char *s;
// 	strcpy(s, "testtest");
// 	bzero(s, 100);
// 	printf("%s", s);
// 	return (0);
// }