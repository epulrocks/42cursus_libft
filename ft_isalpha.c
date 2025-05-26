/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:29:49 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/23 12:32:30 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

static	int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
