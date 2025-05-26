/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:45:16 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/05/26 01:50:51 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;
	char	*p;
	char	*r;

	p = (char *)s;
	n = ft_strlen(p) + 1;
	r = NULL;
	while (n > 0)
	{
		if (*p == (char)c)
			r = p;
		p++;
		n--;
	}
	return (r);
}
