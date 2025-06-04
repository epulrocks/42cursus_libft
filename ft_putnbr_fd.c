/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:22:03 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/06/04 12:16:45 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	int				d;
	int				m;

	nbr = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = n * (-1);
	}
	else
	{
		nbr = n;
	}
	d = nbr / 10;
	m = nbr % 10;
	if (d > 0)
		ft_putnbr_fd(d, fd);
	ft_putchar_fd(m + '0', fd);
}

// #include <limits.h>
// int main(void)
// {
// 	ft_putnbr_fd(INT_MAX, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(INT_MIN, 1);

// 	return (0);
// }