/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:31:13 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/27 23:13:38 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int		diff;
	int		signe;
	int		res;
	int		sz;
	int		i;

	sz = ft_strlen(s);
	signe = 1;
	res = 0;
	diff = 0;
	i = 0;
	while (sz)
	{
		while (((s[i] >= 9 && s[i] <= 13) || s[i] == 32) && diff == 0)
			i++;
		if ((s[i] == 43 || s[i] == 45) && diff == 0)
			if (s[i++] == 45)
				signe = -1;
				diff = 1;
		while (s[i] >= 48 && s[i] <= 57)
			res = res * 10 + s[i++] - 48;
			diff = 1;
		sz--;
	}
	return (res * signe);
}
