/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:38:06 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/05 23:00:37 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	size_t	len;

	ptr = (char *)s;
	len = (ft_strlen(s) + 1);
	while (len > 0)
	{
		if (*s == (char)c)
		{
			ptr = (char *)s;
			break ;
		}
		else
		{
			ptr = NULL;
		}
		s++;
		len--;
	}
	return (ptr);
}
