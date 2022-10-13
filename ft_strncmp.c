/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:18:44 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:21:05 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int ft_strncmp(const char *s1 , const char * s2,size_t count)
{
    int i,res;
    res = i = 0;
    while (count > 0)
    {
            res = s1[i] - s2[i];   
            count--;
            if(s1[i] == s2[i])
            {
              i++;
            }
    }
        return res;
    
}

int main ()
{
    char *s ="aaa";
    char *m ="aad";
    int res = ft_strncmp(s,m,3);
    printf("V : %d",res);
}