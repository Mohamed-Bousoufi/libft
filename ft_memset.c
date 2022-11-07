/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:26:35 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/07 13:14:53 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*s;

	s = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
// int main()
// {
// 	int *i;
// 	//1337
// 	ft_memset(i,57,1);
// 	ft_memset((unsigned char*)i+1,5,1);
// 	printf("%d",*i);
// 	return 0;
// }
