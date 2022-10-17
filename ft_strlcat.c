/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:10:39 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/16 17:06:50 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//size_t strlcat(char  , const char *src, size_t dstsize);
// The strlcat() function appends at most (dstsize-strlen(dst)-1) characters of src 
// to dst (dstsize being the size of the string buffer dst). 
// If the string pointed to by dst contains a null-terminated string that fits into 
// dstsize bytes when strlcat() is called, 
// the string pointed to by dst will be a null-terminated string that fits in 
// dstsize bytes (including the terminating null character) when it completes, 
// and the initial character of src will override the null character at the end of 
// dst. If the string pointed to by dst is longer than dstsize bytes when strlcat() is called, 
// the string pointed to by dst will not be changed. The function returns min
// {dstsize,strlen(dst)}+ strlen(src). Buffer overflow can be checked as follows

size_t  ft_strlcat(char *dst , const char *src, size_t dstsize)
{
    size_t i;
    int j;
    size_t ds;
    ds = strlen(dst);
    i =0;
    j =0;
    if(dstsize != 0 && src)
    
    while(i < dstsize)
    {
        dst[ds+i] = src[i];
                i++;
    }
    return (strlen(src)+i);
}
// int main ()
// {
// //    char *s = "he";
//     char t[0xF] = "balde";
//     size_t b = ft_strlcat(t,(void*)0,0);
//     printf("%zu\t%s",b,t);

// }