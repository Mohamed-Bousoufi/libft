/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:22:04 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/06 12:22:44 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t dstsize)
{
	size_t	i;
	char	*t;
	char	*f;

	t = (char *)dst;
	f = (char *)src;
	i = 0;
	if (t != 0 || f != 0)
	{
		while (dstsize > 0 && i < dstsize)
		{
			t[i] = f[i];
			i++;
		}
	}
	else if (t == 0 && t == 0)
		t = NULL;
	return (t);
}
