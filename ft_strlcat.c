/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:10:39 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/17 19:29:03 by mbousouf         ###   ########.fr       */
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

#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
size_t s = strlen(src);
size_t d = strlen(dst);
if (dstsize == '\0')
{
    return (s);
}
else if (s < dstsize-1)
{
    return (d + s);
}

else
{
    return (d + dstsize);
}
}
