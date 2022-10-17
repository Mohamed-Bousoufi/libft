/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:31:13 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/15 23:46:51 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	diff;
	int	signe;
	long	res;
	int	sz;
	int	i;

	sz = strlen(s);
	signe = 1;
	 res = 0;
	diff = 0;
	i = 0;
	while (sz)
	{
		while ((s[i] == 32 || s[i] ==11 || s[i] ==12 || s[i] ==13 || s[i] ==10 || s[i] ==9)&& diff == 0)
		{
			sz--;
			i++;
		}
		if ((s[i] == 43 || s[i] == 45) && diff == 0)
		{
			if (s[i] == 43)
			{
				diff = 1;
			}
			if (s[i] == 45)
			{
				diff = 1;
				signe = -1;
			}
			sz--;
			i++;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + s[i] - 48;
			diff = 1;
			i++;
		}
		sz--;

	}
	return (res * signe);
}
// int main(int argc, char const *argv[])
// {
// 	printf("%d",ft_atoi("--996"));
// 	return 0;
// }
