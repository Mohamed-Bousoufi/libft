/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:20:06 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/07 13:00:05 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static char	*check(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;

	ptr = 0;
	if ((!haystack || !needle) && (len == 0))
		ptr = NULL;
	if (needle[0] == '\0')
		ptr = ((char *)haystack);
	if (haystack == 0)
	{
		ptr = NULL;
	}
	return (ptr);
}

static char	*strn(const char *haystack, const char *needle,
	size_t len, int diff)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = -1;
	ptr = check(haystack, needle, len);
	while (++i <= (len - 1) && haystack[i])
	{
		if ((haystack[i] == needle[0]) && diff == 0)
		{
			ptr = (char *)&haystack[i];
			diff = 1;
			j = -1;
			while (needle[++j] != '\0')
			{
				if (haystack[i + j] != needle[j] || i + j > len - 1 || len == 0)
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	int		diff;

	diff = 0;
	if (len == 0 && needle[0] != 0)
		return (0);
	ptr = strn(haystack, needle, len, diff);
	if (ptr != 0)
		return (ptr);
	if (needle[0] == '\0')
	ptr = (char *)&haystack[0];
	if (len < ft_strlen(needle))
		return (NULL);
	return (ptr);
}
// int main ()
// {
//     printf("%s",ft_strnstr("abc", "abcdef", 2));
// }