/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:59:21 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/06/12 01:44:18 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*sub_start;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	sub_start = (char *)malloc((len + 1) * sizeof(char));
	if (sub_start == NULL)
		return (NULL);
	sub = sub_start;
	s += start;
	while (*s && len-- > 0)
		*sub++ = *s++;
	*sub = '\0';
	return (sub_start);
}
