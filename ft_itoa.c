/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:49:39 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/05 19:17:26 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*filput(char *num, int c, int number)
{
	int	n;
	int	m;

	n = number;
	m = c;
	if (number < 0)
	{
		num[0] = '-';
		number *= -1;
	}
	c--;
	while (number != 0)
	{
		n = (char)(number % 10 + 48);
		if (n >= 48 && n <= 57)
			num[c--] = n;
		number /= 10;
	}
	num[m] = '\0';
	return (num);
	return (num);
}

char	*checker(int n, int c)
{
	char		*num;
	int			number;

	if (n && c)
		if (n < 0)
			c++;
	number = n;
	num = (char *)malloc(sizeof(char) * c + 1);
	if (!num)
		return (0);
	num = filput(num, c, number);
	return (num);
}

int	count(int n)
{
	int	c;

	c = 0;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		c;
	int		number;
	char	*num;

	number = n;
	if (n == 0)
	{
		num = (char *)ft_strdup("0");
		return (num);
	}
	else if (n == -2147483648)
	{
		num = (char *)ft_strdup("-2147483648");
		return (num);
	}
	else
	{
		c = count(number);
		num = checker(n, c);
	}
	if (!num)
		return (0);
	return (num);
}
// int main ()
// {
// 	int n = -103;
// 	printf("%s",ft_itoa(n));
// }