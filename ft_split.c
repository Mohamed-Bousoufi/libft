/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:59:09 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/25 23:01:30 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_result(char **p, int nom)
{
	int	i;

	i = 0;
	while (i < nom)
	{
		free(p[i]);
		i++;
	}
	free(p);
}

static	int	numot(char const *s, char c)
{
	int	i;
	int	mot;

	i = 0;
	mot = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			mot++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (mot);
}

char	**ft_get_next(const char *s, char c)
{
	char	**p;
	int		i;
	int		j;
	int		start;
	int		lenght;

	i = 0;
	j = 0;
	lenght = numot(s, c);
	p = (char **)malloc(lenght * sizeof(char *));
	if ((!p))
		free_result(p, numot(s, c));
	while (lenght > 0)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		p[j++] = ft_substr(s, start, i - start);
		if (s[i] == '\0')
			break ;
		lenght-- ;
		start = i;
		i++;
	}
	p[j] = 0;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (!s)
	{
		return (0);
	}
	if (c == '\0' && s[0] == '\0')
	{
		return (0);
	}
	p = ft_get_next(s, c);
	if (!p)
	{
		free_result(p, numot(s, c));
		return (0);
	}
	return (p);
}
