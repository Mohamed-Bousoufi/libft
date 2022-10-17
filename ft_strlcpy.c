/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:46:47 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/16 12:10:22 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	i = 0;
	if(size != 0)
	{
	while ( src[i]!=0  && i < size -1)
	{
		 dst[i] = src[i];
		i++;
	}
		dst[i] = 0;

	}
	
	return (ft_strlen(src));
}