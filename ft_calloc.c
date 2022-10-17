/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:43:30 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/16 18:26:19 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p = NULL;
	size_t	i;

	i = 0;
	while (i <= count )
	{
		p = (char *)malloc(size);
		i++;
	}
	i = 0;
	while (i < count &&  p != NULL)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

