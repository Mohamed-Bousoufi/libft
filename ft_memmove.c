/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:18:46 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/06 17:01:42 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int					i;
	char				*ds;
	const char			*sc;

	if (!dest && !src)
		return (0);
	i = n;
	ds = dest;
	sc = src;
	while (n--)
	{
		if (ds < sc)
			*ds++ = *sc++;
		else
			*(ds + n) = *(sc + n);
	}
	return (dest);
}
