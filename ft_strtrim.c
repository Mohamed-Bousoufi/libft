/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:41:57 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/31 14:12:09 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	sl;
	int	j;

	if (!s1 || !set)
	{
		return (NULL);
	}
	i = 0;
	sl = ft_strlen(s1);
	j = sl;
	while ((i < (sl +1)) && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (ft_strchr(set, s1[j]) && s1 && j > i)
	{
		j--;
	}
	return (ft_substr(s1, i, (j - i) + 1));
}
