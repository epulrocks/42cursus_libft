/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:29:49 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/21 00:11:38 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
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
// 	return (0);
// }
