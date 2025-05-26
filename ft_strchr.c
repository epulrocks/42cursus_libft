/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:25:01 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/26 02:05:36 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	n;
	char	*p;

	p = (char *)s;
	n = ft_strlen(p) + 1;
	while (n > 0)
	{
		if (*p == (char)c)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}
