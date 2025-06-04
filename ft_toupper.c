/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:16:37 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/06/04 04:01:51 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
