/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 09:59:42 by jsprigga          #+#    #+#             */
/*   Updated: 2019/02/18 11:49:16 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERAL_H
# define GENERAL_H

# include "libft.h"
# include "ps_stack.h"

int			check_input(char *arg, t_stack *stack_a);
int			read_input(t_stack *stack_a, int argc, char **argv);
void		comb_sort(int *data, int size);
void		memory_error(void);
#endif
