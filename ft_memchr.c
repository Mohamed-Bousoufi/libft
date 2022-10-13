/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:27:53 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:18:26 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void * ft_memchr(void *s,int c , size_t n)
{
     unsigned char *ptr = NULL;
     while(n > 0)
     {
        if(*(unsigned char*)s==(char)c)
        {
            ptr = (unsigned char *)s;
            break;
        }
        else
            n--;
            s++;
     }
     return ptr;
}
int main ()
{
    char *s = "hjkhfdgshjdfphkjhfgd";
    int ch = 'p';
    printf("la valuer est %s",ft_memchr(s,ch,strlen(s)));
}