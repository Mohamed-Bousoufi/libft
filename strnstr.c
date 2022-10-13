/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:20:06 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:23:44 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *     ft_strnstr (const char *big, const char *little, size_t len)
{
    size_t i,j;
     i = j = 0;
     char * ptr = NULL;
     int diff ;
        diff = 0;
    
    while(i < len)
    {
        if((big[i] == little[0]) && diff==0)
      {  
                ptr =(char *)&big[i];
                    diff = 1;
        while(little[j] != '\0')
        {
          if(big[i] != little[j])
          {
            ptr =NULL;
          }
                j++;
                i++;
        }
      }
        i++;
    }
    if(little[0] == '\0')
        {
            ptr =(char *)&big[0];
        }
    return ptr;
}

int main ()
{
    
           const char *largestring = "";
           const char *smallstring = "";
           char *ptr;

           ptr = ft_strnstr(largestring, smallstring,10);
           printf("%s",ptr);
}