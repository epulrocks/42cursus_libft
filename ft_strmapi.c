/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:48:09 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/06/12 03:09:52 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	slen;
	char	*new_s;
	char	*ptr;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	slen = ft_strlen(s);
	new_s = (char *)malloc((slen + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	ptr = new_s;
	i = 0;
	while (i < slen)
	{
		*ptr = f(i, *s);
		ptr++;
		i++;
		s++;
	}
	*ptr = '\0';
	return (new_s);
}
