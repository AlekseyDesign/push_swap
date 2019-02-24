/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:14:58 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/04 12:56:08 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	symb;
	char	*res;

	res = NULL;
	symb = (char)c;
	while (1)
	{
		if (*s == symb)
			res = (char *)s;
		if (!*s)
			break ;
		s++;
	}
	return (res);
}
