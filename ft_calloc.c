/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:43:30 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/31 12:52:06 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*p;

	i = 0;
	p = malloc(size * count);
	if (p <= 0)
		return (NULL);
	while (i < (size * count))
	{
		p[i] = '\0';
		i++;
	}
	return ((void *)p);
}
