/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:44:59 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:15:53 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char *s)
{
    int i;
    i = 0;
    if(s)
    {
    while (s[i]!='\0')
    {
        i++;
    }
    } 
    return i;
}
int main ()
{
    char s[] = "beruxelle";
    int c = ft_strlen(s);
    printf("the resault : %d",c);
}