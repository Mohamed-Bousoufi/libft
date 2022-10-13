/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:06:18 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:24:18 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strrchr(const char *s ,int c)
{
    int i = ft_strlen(s);
    char * ptr = NULL;
    char b = (char)c;
    
    while((i--))
    {
        if(s[i] == c)
        {
            ptr = &b;
        }
            i--;
    }
    return ptr;
}
int main ()
{
    char *s ="seasofjhjhsajljhdfggisjdf";
    char x = 's';
    char * p =strrchr(s,x);
    printf("ptr >>>> %s",p);
}