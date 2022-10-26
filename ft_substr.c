/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:32:29 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/25 17:46:11 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	char	*ft_substr(const char *s ,unsigned int start,size_t len)
	{
		int i =0;
		char *p;
	
		if(s == '\0' && len >= 0)
		{
			return (0);
		}
		 if(start >= (unsigned int)strlen(s))
		{
			return (ft_strdup(""));
		}
		p = (char *)malloc(len+1);
		if(!p)
		{
			return (NULL);
		}	
		if(len > ft_strlen(s) - start)
			len = ft_strlen(s) - start;
		while(len)
		{
		   p[i] = s[start+i];
				i++;
				len--;
		}
		p[i] = '\0';
		return (p);
	}
   