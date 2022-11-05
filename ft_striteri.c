/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:21:43 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/05 18:45:58 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applique la fonction ’f’ à chaque caractère de la
// chaîne de caractères transmise comme argument,
// et en passant son index comme premier argument.
// Chaque caractère est transmis par adresse à ’f’
// afin d’être modifié si nécessaire.
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, (s + i));
		i++;
	}
}
