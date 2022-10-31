/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:59:09 by mbousouf          #+#    #+#             */
/*   Updated: 2022/10/29 15:57:23 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	free_result(char **p, int nom)
{
	int	i;

	i = nom;
	if (!p)
	{
		p = 0;
	}
	else
	{
		while (i > 0)
		{
			free(p[i]);
			i--;
		}
		free(p);
	}
}

static int	numot(char const *s, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nb++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (nb);
}

char	**ft_get_next(const char *s, char c, int len)
{
	char	**p;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	p = malloc((len + 1) * sizeof(char *));
	if (!p)
		return (0);
	while (len && s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		p[j] = ft_substr(s, start, (i - start));
		start = i;
		i++;
		j++;
		len--;
	}
	p[j] = 0;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		lenght;

	if (!s)
		return (0);
	lenght = numot(s, c);
	p = ft_get_next(s, c, lenght);
	if (!p)
	{
		free_result(p, numot(s, c));
		return (0);
	}
	return (p);
}
// int main ()
// {
// 	char ** s = ft_split("  tripouille  42  ", ' ');
// 	printf("%zu >>>> %zu",ft_strlen(s[1]),ft_strlen("42"));
// }