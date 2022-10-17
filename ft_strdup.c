/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:45:24 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/16 21:49:57 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
size_t ft_strlen(const char *s);

char    *ft_strdup(const char *s)
{
    char *p;
    size_t i = 0;
    p = (char *) malloc (ft_strlen(s) + 1);
	if (p == 0)
		return 0;
	while(i < ft_strlen(s))
	{
		p[i] = s[i];
		i++;
	}
	p[i] = 0;
    return (p);
}