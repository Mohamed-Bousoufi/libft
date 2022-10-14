/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:27:53 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/13 23:58:25 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = NULL;
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			ptr = (unsigned char *)s;
			break ;
		}
		else
			n--;
		s++;
	}
	return (ptr);
}
