/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:43:30 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/23 22:02:00 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	max;
	size_t	i;
	char	*p;

	max = count * size;
	i = 0;
	p = malloc(max);
	if (p <= 0)
	{
		return (NULL);
	}
	while (i < max)
	{
		p[i] = '\0';
		i++;
	}
	return ((void *)p);
}
