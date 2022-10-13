/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:22:04 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:19:07 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"
// Copies "numBytes" bytes from address "from" to address "to"
// void * memcpy(void *to, const void *from, size_t numBytes);


void * ft_memcpy(void *to, const void *from, size_t numBytes)
{
    int i = 0;
     char *t = to;
     const char *f = from;
    while ((i < numBytes))
    {
        t[i] = f[i];
        i++;
    }
    
 return t;
    
}
int main ()
{
    
    char s1 [6] = "overla";
    char s2 [6] = "";
    ft_memcpy(s2,s1,5);
    printf("%s >>>>>",s2);
    
}