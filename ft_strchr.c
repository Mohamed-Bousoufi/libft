/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:38:06 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/14 00:23:32 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	char	*ptr;
	size_t	len;

	ptr = (char *)string;
	len = (ft_strlen(string) + 1);
	while (len > 0)
	{
		if (*string == (char)c)
		{
			ptr = (char *)string;
			break ;
		}
		else
		{
			ptr = NULL;
		}
		string++;
		len--;
	}
	return (ptr);
}
