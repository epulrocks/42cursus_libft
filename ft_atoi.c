/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 02:47:48 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/26 11:03:06 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	else if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	n;

	sign = 1;
	n = 0;
	while (is_space(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr)
	{
		if (ft_isdigit(*nptr))
			n = (n * 10) + (*nptr - 48);
		else
			break ;
		nptr++;
	}
	return (n * sign);
}
