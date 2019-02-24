/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 12:32:32 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/04 17:13:11 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cur_list;
	t_list	*next_list;

	if (alst)
	{
		cur_list = *alst;
		while (cur_list)
		{
			next_list = cur_list->next;
			ft_lstdelone(&cur_list, del);
			cur_list = next_list;
		}
		*alst = NULL;
	}
}
