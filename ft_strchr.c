/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:38:06 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:24:33 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char * ft_strchr(const char * string, int c)
{
    
     char * ptr = (char *)string;
     size_t len = (ft_strlen(string)+1);
    while(len)
    {
        if(*string==(char)c)
        {
            ptr = (char *)string;
            break;
        }
        else
        {
            ptr=NULL;
        }
            string++;
    }
    return ptr;
}
