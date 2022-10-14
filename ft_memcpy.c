/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:22:04 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/14 13:07:41 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include<stdio.h>
#include <string.h>
void*    ft_memcpy(void *to, const void *from, size_t numBytes)
{
    size_t i = 0;
    char  *t = (char *)to;
    char *f = (char *)from;
            
    while ( numBytes > 0 && i < numBytes )
        {
		
            t[i] = f[i];
            i++;
        }
    
    
    return (t);
}
// int main()
// {
//          char *s1 = "\200";
//         char *s2 = "\0";
//         int i1 = ((strncmp(s1, s2, 1) > 0));
//         int i2 = ((ft_strncmp(s1, s2, 1) > 0));
// }
