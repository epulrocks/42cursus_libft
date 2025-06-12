/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:09:34 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/06/12 02:01:32 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;
	char	*ptr;

	if ((s1 == NULL) & (s2 == NULL))
		return (NULL);
	s1_len = 0;
	s2_len = 0;
	if (s1 != NULL)
		s1_len = ft_strlen(s1);
	if (s2 != NULL)
		s2_len = ft_strlen(s2);
	result = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ptr = result;
	while (s1_len-- > 0)
		*ptr++ = *s1++;
	while (s2_len-- > 0)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (result);
}
