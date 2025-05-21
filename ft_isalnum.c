/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 00:27:31 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/21 06:37:10 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c))
		return (1);
	else if (ft_isdigit(c))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_isalpha('a'));
// 	printf("%d", ft_isalpha('z'));
// 	printf("%d", ft_isalpha('A'));
// 	printf("%d", ft_isalpha('Z'));
// 	printf("%d", ft_isalpha('g'));
// 	printf("%d", ft_isalpha('G'));
// 	printf("%d", ft_isalpha('@'));
// 	printf("%d", ft_isalpha('['));
// 	printf("%d", ft_isalpha('`'));
// 	printf("%d", ft_isalpha('{'));
// 	printf("---");
// 	printf("%d", ft_isdigit('0'));
// 	printf("%d", ft_isdigit('2'));
// 	printf("%d", ft_isdigit('5'));
// 	printf("%d", ft_isdigit('7'));
// 	printf("%d", ft_isdigit('9'));
// 	printf("%d", ft_isdigit('/'));
// 	printf("%d", ft_isdigit(':'));
// 	return (0);
// }