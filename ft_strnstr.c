/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:20:06 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/20 16:06:55 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	int		diff;

	diff = 0;
	ptr = NULL;
	i = 0;
	j = 0;
	while (i < len)
	{
		if ((big[i] == little[0]) && diff == 0)
		{
			ptr = (char *)&big[i];
			diff = 1;
			while (little[j] != '\0')
			{
				if (big[i] != little[j])
				{
					ptr = NULL;
				}
				j++;
				i++;
			}
		}
		i++;
		len--;
	}
	if (little[0] == '\0')
	{
		ptr = (char *)&big[0];
	}
	return (ptr);
}
// int main ()
// {
//     char *s = "see FF your FF return FF now FF";
//     char *d = "FF";
//     char *x = ft_strnstr(d,s,4);

//     printf("%s",x);
// }
