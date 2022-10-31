/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:10:39 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/31 14:08:30 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ds;
	size_t	i;

	if (!dst && dstsize == 0)
	{
		return (ft_strlen(src));
	}
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	ds = ft_strlen(dst);
	while (src[i] != '\0' && dstsize > ds + 1)
	{
		dst[ds] = src[i];
		ds++;
		i++;
	}
	dst[ds] = '\0';
	return (ds + ft_strlen(&src[i]));
}
