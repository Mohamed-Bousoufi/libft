/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:26:35 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/12 22:19:50 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void *ft_memset (void *str, int c, size_t n)
{
  size_t i = 0;
  unsigned char *s = (unsigned char * )str;
  while(i < n )
  {
    s[i] = c;
    i++;
  }
  return (s);
}
int main ()
{
  char s[] = "hello";
  ft_memset(s+2,'i',2);
  printf("%s",s);
  
}