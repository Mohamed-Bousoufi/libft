/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:50:25 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:18:43 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
     int i,res;
    res = i = 0;
    while (n > 0)
    {
            res = *(unsigned char *)s1 - *(unsigned char*)s2;   
            n--;
            if(*(unsigned char *)s1==*(unsigned char *)s2)
            {
              s1++;
              s2++;
            }
    }
        return res;
}
int main ()
{
    char *s1 = "howxn";
    char *s2 ="howxp";
    int x = ft_memcmp(s1,s2,7);
    printf("la valuer : %d",x);
}