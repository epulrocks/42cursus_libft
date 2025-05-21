/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 06:46:07 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/21 06:49:34 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d", ft_isprint(0));
//     printf("%d", ft_isprint(10));
//     printf("%d", ft_isprint(31));
//     printf("%d", ft_isprint(32));
//     printf("%d", ft_isprint(125));
//     printf("%d", ft_isprint(126));
//     return (0);
// }