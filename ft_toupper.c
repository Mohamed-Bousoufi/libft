/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:52:12 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:24:07 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int ft_toupper(int c)
{
    if(ft_isascii(c))
    if(c >= 97 && c <= 122)
    {
        c = c - 32;
    }
    return c;
    
}
int main ()
{
    char m[]="hello";
    int i = 0;
    while(m[i])
    {
        printf("%c",ft_toupper(m[i]));
        i++;
    }
    
}