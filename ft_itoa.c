/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:49:39 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/27 19:43:02 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*checker(int n, int c)
{
	char	*num;
	int		number;

	number = n;
	num = malloc(sizeof(char) * c + 2);
	if (!num)
		return (0);
	num[c + 1] = '\0';
	if (number < 0)
	{
		num[0] = '-';
		number *= -1;
	}
	else
		c--;
	while (number != 0)
	{
		n = (char)(number % 10 + 48);
		if (n >= 48 && n <= 57)
			num[c] = n;
		c--;
		number /= 10;
	}
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
		return ((char *)strdup("0"));
	}
	if (n == -2147483648)
	{
		return ((char *)strdup("-2147483648"));
	}
	c = count(n);
	num = checker(n, c);
	return (num);
}
