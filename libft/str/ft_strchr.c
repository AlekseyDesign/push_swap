/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:07:42 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/04 12:54:25 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	symb;
	char	*ar;

	symb = (char)c;
	ar = (char *)s;
	while (1)
	{
		if (*ar == symb)
			return (ar);
		if (!*ar)
			break ;
		ar++;
	}
	return (NULL);
}
