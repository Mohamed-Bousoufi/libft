/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:18:44 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/14 17:20:29 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_strncmp(const char *s1, const char *s2, size_t count)
{
    unsigned char    * d;
    unsigned char    * s;
    size_t i ; 
    int res;
         d = (unsigned char *)s1;
         s = (unsigned char *)s2;
         i = 0;
         res = 0;
    while(i < count && i <strlen((const char *)d))
    {
      if(d[i] > s[i])
      {
        res = 1;
      }
      else if(d[i] < s[i]) 
      {
        
        res = -1;
      }
      else
      {
        res =0;
      }
            
            i++;
    }
    return (res);
}
