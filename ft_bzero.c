/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:58:38 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/16 18:13:56 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (!n)
	{
		return ;
	}
		while (i < n)
		{
			str[i++] = 0;
		}

}
// int main ()
// {
// 	char s[] = "";
// 	ft_bzero(s,3);
// 	printf("%s",s);
// }