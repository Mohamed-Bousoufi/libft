/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:20:06 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/12 17:21:13 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*h;
	char	*n;
	char	*ptr;
	size_t	l;

	h = (char *)haystack;
	n = (char *)needle;
	i = -1;
	l = len;
	ptr = NULL;
	if ((int)len < 0)
		l = INT_MAX;
	if (n[0] == '\0')
		return (h);
	if (h[0] == '\0' || len == 0 || len < (ft_strlen(n)))
		return (NULL);
	while (h[++i] && l)
	{
		if (ft_strncmp(&h[i], n, ft_strlen(n)) == 0)
			if ((int) l >= (int)ft_strlen(n))
				return (&h[i]);
		l--;
	}
	return (ptr);
}
