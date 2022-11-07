/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:45:24 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/06 17:26:07 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(ft_strlen(s1) + 1);
	if (!p)
		return (0);
	while (i < ft_strlen(s1))
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
