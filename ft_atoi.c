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

int	ft_atoi(const char *str)
{
	int			signe;
	long long	res;
	int			sz;
	int			i;

	sz = ft_strlen(str);
	signe = 1;
	res = 0;
	i = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
			i++;
	if ((str[i] == 43 || str[i] == 45))
		if (str[i++] == 45)
				signe = -1;
	while (str[i] >= 48 && str[i] <= 57)
			res = res * 10 + str[i++] - 48;
		sz--;
	return (res * signe);
}
