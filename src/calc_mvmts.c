/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_mvmts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:08:50 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 22:17:46 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* For the number at position 'pos' in stack 'src'*, returns the number of rb
and rrb needed for it to be at the top of the stack, and the number of ra or
rra needed for it to be push correctly in stack 'dest'. */
t_mvmts	calc_mvmts(t_stack *dest, t_stack *src, int pos)
{
	t_mvmts temp;

	temp.ra = calc_rotations(src->n[pos], dest);
	temp.rra = dest->size - temp.ra;
	temp.rb = pos;
	temp.rrb = src->size - pos;
	ft_printf("Movements: %i %i %i %i\n", temp.ra, temp.rra, temp.rb, temp.rrb);
	return (temp);
}
