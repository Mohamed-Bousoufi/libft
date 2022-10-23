/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:22:04 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/23 22:06:39 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	size_t	i;
	char	*t;
	char	*f;

	t = (char *)to;
	f = (char *)from;
	i = 0;
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
//         char * i1 = ft_memcpy(s1,s2, 14);;
//         printf("%s",i1);
// }
