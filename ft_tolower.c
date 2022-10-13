/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:48:40 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:22:12 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_tolower(int c)
{
    if(isascii(c))
    if(c >= 65 && c <=90)
    {
        c = c + 32;
    }
    return c;
}
int main()
{
    int  y = ';';
    printf("to lower : %c",ft_tolower(y));
}