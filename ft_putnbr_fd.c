/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:07:44 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/05 19:25:19 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		b;
	long int	num;

	num = n;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 12);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		num = num * -1;
	}
	if (num < 10)
	{
		b = (num + 48);
		write(fd, &b, 1);
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
		num = num / 10;
	}
}
