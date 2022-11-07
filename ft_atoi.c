/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:31:13 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/06 16:27:28 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_at(const char *str)
{
	int			diff;
	int			signe;
	long long	res;
	int			sz;
	int			i;

	sz = ft_strlen(str);
	signe = 1;
	res = 0;
	diff = 0;
	i = 0;
	while (sz)
	{
		while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && diff == 0)
			i++;
		if ((str[i] == 43 || str[i] == 45) && diff == 0)
			if (str[i++] == 45)
				signe = -1;
		diff = 1;
		while (str[i] >= 48 && str[i] <= 57)
			res = res * 10 + str[i++] - 48;
		diff = 1;
		sz--;
	}
	return (res * signe);
}

int	ft_atoi(const char *s)
{
	int	res;

	res = 0;
	res = ft_at(s);
	if (res > INT_MAX)
		return (0);
	else if (res < INT_MIN)
		return (-1);
	else
		return (res);
}
