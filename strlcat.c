/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:33:24 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:23:03 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// size_t ft_strlcat(char * dst , const char * src ,size_t dst_size)
// {
//     size_t ds = strlen(dst);
//     size_t sc = strlen(src);
    
// }
int main()
{
    char dst[] = "abcdlk";
    char src[] = "efcg";
    size_t r = strlcat(dst,src,7);
   printf("%s >>>> %s [%zu]",src,dst,r);
}