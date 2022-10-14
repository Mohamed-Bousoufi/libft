/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:06:18 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/14 01:51:10 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	len;
	int diff =0;

	ptr = (char *)s;
	len = (ft_strlen(s) + 1);
	while (len > 0)
	{
		if (*s == (char)c)
		{
			ptr = (char *)s;
			diff =1;
		}
		else if (diff == 0)
		{
			ptr = NULL;
		}
		s++;
		len--;
	}
	return (ptr);
}
