/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:58:38 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:17:01 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_bzero(void *s , size_t n)
{
    size_t i = 0;
    char *str = (char *)s;
    if(s)
    {
        while(i < n)
        {
            str[i] = '\0';
            i++;
        }
    }    
}
int main ()
{
    int s[] = {1,8,9,7,5};
    ft_bzero(s,7);
    printf("char s :%s",s);
}