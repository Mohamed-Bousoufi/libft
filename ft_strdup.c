/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:45:24 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 21:05:46 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strdup (const char * s)
{
    int i = 0; 
    int size = ft_strlen(s);
    char *p = (char *)malloc(size);
    void *m = memcpy(p,s,size);
    return p;
}
int main ()
{
    char * t = "hello!";
    char * ptr = ft_strdup(t);
    printf("%s",ptr);
}