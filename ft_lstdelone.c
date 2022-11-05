/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:13:32 by mbousouf          #+#    #+#             */
/*   Updated: 2022/11/05 12:43:46 by mbousouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void	ft_lstdelone( t_list *lst, void (*del)(void*))
{
	if (!lst || !(*del))
	{
		return ;
	}
	del(lst -> content);
	free(lst);
}
