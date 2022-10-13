/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:31:13 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:16:31 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char * s)
{
    
    int i = 0;
    int sz = strlen(s);
    int signe =1;
    int res = 0;
    int  diff =0;
    while(sz)
    {
    while(s[i] == 32  && diff== 0)
    {
        i++;
        sz--;
    }
    if((s[i] == 43 || s[i] == 45) && diff ==0)
    {
        if(s[i] == 43)
        {
            diff = 1;
        }
        if(s[i] == 45)
        {
            diff =1;
            signe = -1;
        }
        sz--;
        i++;
    }
    while(s[i]>= 48 && s[i] <= 57)
    {
         res = res * 10 + s[i] - 48;
                diff=1;
                sz--;
                i++;
    }
        sz--;
    }
    return res * signe;
}
int main ()
{
    char * str ="   +36*#g5-0lo";
    int x = ft_atoi(str);
     
    printf("str >>>>>>> %d",x);
}