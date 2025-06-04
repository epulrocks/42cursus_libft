/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdul-r <mabdul-r@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:47:30 by mabdul-r          #+#    #+#             */
/*   Updated: 2025/06/04 16:25:25 by mabdul-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	backward_fill(char *str, unsigned int nbr, unsigned int count, int sign)
{
	unsigned int	m;

	if (sign < 0)
		count--;
	while (count--)
	{
		m = nbr % 10;
		nbr = nbr / 10;
		*str++ = m + '0';
	}
	if (sign < 0)
		*str++ = '-';
	*str = '\0';
}

static void	swap(char *a, char *b)
{
	char	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

static void	reverse_string(char *str)
{
	size_t	size;
	size_t	half;
	size_t	i;

	size = ft_strlen(str);
	half = size / 2;
	i = 0;
	while (i < half)
	{
		swap(&str[i], &str[size - 1 - i]);
		i++;
	}
}

char	*ft_itoa(int n)
{
	int				sign;
	int				count;
	unsigned int	nbr;
	char			*str;

	if (n < 0)
	{
		sign = -1;
		count = 1;
		nbr = n * (-1);
	}
	else
	{
		sign = 1;
		count = 0;
		nbr = n;
	}
	count += count_digit(nbr);
	str = (char *)malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	backward_fill(str, nbr, count, sign);
	reverse_string(str);
	return (str);
}

// int	main(void)
// {
// 	ft_itoa(234623);
// 	return (0);
// }

		// char	*str;

		// nbr = n;
// 		sign = 1;
// 		count = 0;
// 		if (nbr < 0)
// 		{
// 			sign = -1;
// 			count++;
// 			nbr *= -1;
// 		}
// 		count_digit(nbr, &count);
// 		str = to_string(nbr, count, sign);
// 		return (str);
// }

// void	count_digit(long n, int *count)
// {
// 	n = n / 10;
// 	if (n > 0)
// 		count_digit(n, count);
// 	(*count)++;
// }

// void	temp(char *str, long n, int count)
// {
// 	long	d;
// 	long	m;
// 	char	num[1];

// 	d = n / 10;
// 	m = n % 10;
// 	if (d > 0)
// 		temp(str, d, count);
// 	num[0] = m + '0';
// 	ft_strlcat(str, num, count);
// }

// static	char	*to_string(long n, int count, int sign)
// {
// 	char	*str;
// 	char	*p;
// 	int		i;

// 	str = (char *)malloc((count + 1) * sizeof(char));
// 	if (str == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < count + 1)
// 		str[i++] = '\0';
// 	p = str;
// 	if (sign < 0)
// 		*p++ = '-';
// 	temp(str, n, count + 1);
// 	ft_strlcat(str, "\0", count + 1);
// 	return (str);
// }

// char	*ft_itoa(int n)
// {
// 	int		sign;
// 	int		count;
// 	char	*str;
// 	long	nbr;

// 	nbr = n;
// 	sign = 1;
// 	count = 0;
// 	if (nbr < 0)
// 	{
// 		sign = -1;
// 		count++;
// 		nbr *= -1;
// 	}
// 	count_digit(nbr, &count);
// 	str = to_string(nbr, count, sign);
// 	return (str);
// }

// #include <stdio.h>
// int		main(void)
// {
// 	int		arg;

// 	arg = 1;
// 	while (arg < 11)
// 	{
// 		if (arg == 1)
// 		{
// 			char *res = ft_itoa(0);
// 			printf("%s", res);
// 			free(res);
// 		}
// 		else if (arg == 2)
// 		{
// 			char *res = ft_itoa(9);
// 			printf("%s", res);
// 			free(res);
// 		}
// 		else if (arg == 3)
// 		{
// 			char *res = ft_itoa(-9);
// 			printf("%s", res);
// 			free(res);
// 		}
// 		else if (arg == 4)
// 		{
// 			char *res = ft_itoa(10);
// 			printf("%s", res);
// 			free(res);
// 		}
// 		else if (arg == 5)
// 		{
// 			char *res = ft_itoa(-10);
// 			printf("%s", res);
// 			free(res);
// 		}
// 		else if (arg == 6)
// 		{
// 			char *res = ft_itoa(8124);
// 			printf("%s", res);
// 			free(res);
// 		}
// 		else if (arg == 7)
// 		{
// 			char *res = ft_itoa(-9874);
// 			printf("%s", res);
// 			free(res);
// 		}
// 		else if (arg == 8)
// 		{
// 			char *res = ft_itoa(543000);
// 			printf("%s", res);
// 			free(res);
// 		}
// 		else if (arg == 9)
// 		{
// 			char *res = ft_itoa(-2147483648LL);
// 			printf("%s", res);
// 			free(res);
// 		}
// 		else if (arg == 10)
// 		{
// 			char *res = ft_itoa(2147483647);
// 			printf("%s", res);
// 			free(res);
// 		}
// 		printf("\n");
// 		arg++;
// 	}
// }
