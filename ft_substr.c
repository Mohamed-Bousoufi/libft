/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:32:29 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/28 22:06:26 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*p;

	i = 0;
	
	if (s == '\0' && len >= 0)
		return (0);
	if (start >= (unsigned int)ft_strlen(s))
	{
		p = ft_strdup("");
		return (p);
	}
	p = (char *)malloc(len+1);
	if (!p)
	{
		p = NULL;
		return (NULL);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	while (len)
	{
		p[i] = s[start + i];
		i++;
		len--;
	}
	p[i] = '\0';
	return (p);
}

