/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:22:04 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/15 21:24:22 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	size_t i = 0;
	char *t = (char *)to;
	char *f = (char *)from;

	if (t != 0 || f != 0)
	{
		while (numBytes > 0 && i < numBytes)
		{

			t[i] = f[i];
			i++;
		}
	}
	else if (t == 0 && t == 0)
		t = NULL;

	return (t);
}
// int main()
// {
//          char s1[] = "adama traoury";
//         const char s2[] = "luis";
//         char * i1 = ft_memcpy(((void *)0), ((void *)0), 3);;
//         printf("%s",i1);
// }
