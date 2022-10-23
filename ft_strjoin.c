/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:25:59 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/23 23:09:45 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*ptr;
	int		j;

	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1 && s2)
	{
		ptr = (char *)malloc(s2len + s1len + 1);
		if (!ptr)
			return (NULL);
		ft_memmove(ptr, s1, s1len);
		while (s2len)
		{
			ptr[s1len++] = s2[j++];
				s2len--;
		}
		ptr[s1len] = '\0';
		return (ptr);
	}
	return (NULL);
}
