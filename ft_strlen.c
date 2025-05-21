/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 06:50:15 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/21 07:09:58 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	i;

	while (*c)
	{
		i++;
		c++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*test = "testingsss";
// 	printf("%d", ft_strlen(test));
// 	return (0);
// }