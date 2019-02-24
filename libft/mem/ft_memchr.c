/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:03:29 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/03 10:49:59 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ar;
	unsigned char	b;

	ar = (unsigned char *)s;
	b = (unsigned char)c;
	while (n-- > 0)
	{
		if (*ar == b)
			return (ar);
		ar++;
	}
	return (NULL);
}
