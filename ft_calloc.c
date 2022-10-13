/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:43:30 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:17:34 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void * ft_calloc(size_t count , size_t size)
{
     int * p;
    int i = 0;
    while (i < count && size)
    {
        p = (int *)malloc(size);
        i++;
    }
    i = 0;
    while(i < count)
    {
        p[i] = 0;
            i++;
    }
    return p;
}
int main()
{
    int i = 0;
    int * ptr = (int *)calloc(2,0);
    while( i < 5)
    {
        printf("%d \n",ptr[i]);
            i++;
    } 
    //free(ptr);
    return 0;
}