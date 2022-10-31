/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:14:20 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/31 18:52:06 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			write(fd, (s + i), 1);
			i++;
		}
	}
}
