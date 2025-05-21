/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 00:16:53 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/21 00:20:19 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_isdigit('0'));
// 	printf("%d", ft_isdigit('2'));
// 	printf("%d", ft_isdigit('5'));
// 	printf("%d", ft_isdigit('7'));
// 	printf("%d", ft_isdigit('9'));
// 	printf("%d", ft_isdigit('/'));
// 	printf("%d", ft_isdigit(':'));
// 	return (0);
// }
