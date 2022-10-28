/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:20:06 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/28 17:11:24 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	char *ptr;
	size_t i;
	size_t j;
	int diff;
	 if (little[0] == '\0')
 	ptr = (char *)&big[0];     
	diff = 0;
	i = 0;
	j = 0;
	while (i <= (len - 1) && big[i])
	{
		if ((big[i] == little[0]) && diff == 0)
		{
			ptr = (char *)&big[i];
			diff = 1;
			while (little[j] != '\0')
			{
				if (big[i + j] != little[j] || i + j > len - 1)
				{
					ptr = NULL;
					diff = 0;
				}
				j++;
			}
			j = 0;
		}
		i++;
	}
	 if (len == 0 && little[0] != 0)
	 	return (0);
	return (ptr);
}	


// int main()
// {
// 	char haystack[] = "aaabcabcd";
// 	printf("%s",ft_strnstr("aaabcabcd", "a", 1));
// }