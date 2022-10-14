/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:45:24 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/13 20:53:52 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*p;
	void	*m;

	i = 0;
	p = NULL;
	size = ft_strlen(s);
	m = memcpy(p, s, size);
	p = (char *)malloc(size);
	return (p);
}
