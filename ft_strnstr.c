/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 02:10:06 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/26 02:44:26 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p1;
	char	*p2;
	size_t	n_little;

	n_little = ft_strlen(little);
	if (n_little == 0)
		return ((char *)big);
	while (ft_strlen(big) >= n_little && len-- >= n_little)
	{
		if (*big == *little)
		{
			p1 = (char *)big;
			p2 = (char *)little;
			while (*p2++)
			{
				p1++;
				if (!*p2)
					return ((char *)big);
				else if (*p1 != *p2)
					break ;
			}
		}
		big++;
	}
	return (NULL);
}
