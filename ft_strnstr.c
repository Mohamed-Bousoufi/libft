/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:20:06 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/05 19:18:18 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*check(const char *big, const char *little, size_t len)
{
	char	*ptr;

	ptr = 0;
	if ((!big || !little) && (len == 0))
		ptr = "\0";
	if (little[0] == '\0')
		ptr = ((char *)big);
	if (big == 0)
	{
		ptr = "\0";
	}
	return (ptr);
}

char	*strn(const char *big, const char *little, size_t len, int diff)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = -1;
	ptr = check(big, little, len);
	while (++i <= (len - 1) && big[i])
	{
		if ((big[i] == little[0]) && diff == 0)
		{
			ptr = (char *)&big[i];
			diff = 1;
			j = -1;
			while (little[++j] != '\0')
			{
				if (big[i + j] != little[j] || i + j > len - 1 || len == 0)
				{
					ptr = NULL;
					diff = 0;
				}
			}
			j = -1;
		}
	}
	return (ptr);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	int		diff;

	diff = 0;
	if (len == 0 && little[0] != 0)
		return (0);
	ptr = strn(big, little, len, diff);
	if (ptr != 0)
		return (ptr);
	if (little[0] == '\0')
	ptr = (char *)&big[0];
	return (ptr);
}
// int main
// {
// 	char * l = "abcdef";
// 	char * b = "abc";
// 	char *s =ft_strnstr(b,l,2);
// 	printf("%s",s);
// }
