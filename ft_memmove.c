/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:18:46 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/23 22:11:38 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int					i;
	char				*ds;
	const char			*sc;

	i = n;
	ds = dest;
	sc = src;
	if (ds < sc)
	{
		while (n--)
		{
			*ds++ = *sc++;
		}
	}
	else if (ds > sc)
	{
		while (n--)
		{
			ds[n] = sc[n];
		}
	}
	return (ds);
}
