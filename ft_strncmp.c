/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:18:44 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/16 11:54:21 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t count)
{
	size_t i;
	i = 0;

	while (i < count && (s1[i] || s2[i]))
	{
		if (s2[i] != s1[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// int main()
// {
//           char *s1 = "";
//         char *s2 = "AAAAAA";
//         int i1 = ((strncmp(s1, s2, 6) > 0) ? 1 : ((strncmp(s1, s2, 6) < 0) ? -1 : 0));
//         int i2 = ((ft_strncmp(s1, s2, 6) > 0) ? 1 : ((ft_strncmp(s1, s2, 6) < 0) ? -1 : 0));
//         printf("%d\t%d",i1,i2);
// }