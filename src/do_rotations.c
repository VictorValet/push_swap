/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rotations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:12:19 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/11 14:54:35 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_comb(int a, int b, int c, int d)
{
	int	low;
	int	comb;

	low = a;
	comb = RA_RB;
	if (b < low)
	{
		low = b;
		comb = RRA_RRB;
	}
	if (c < low)
	{
		low = c;
		comb = RA_RRB;
	}
	if (d < low)
	{
		low = d;
		comb = RRA_RB;
	}
	return (comb);
}

void	update_data(t_list *el)
{
	int	ra_rb;
	int	rra_rrb;
	int	ra_rrb;
	int	rra_rb;
	int	comb;

	ra_rb = el->rb;
	if (el->ra >= el->rb)
		ra_rb = el->ra;
	rra_rrb = el->rrb;
	if (el->rra >= el->rrb)
		rra_rrb = el->rra;
	ra_rrb = el->ra + el->rrb;
	rra_rb = el->rra + el->rrb;
	comb = find_comb(ra_rb, rra_rrb, ra_rrb, rra_rb);
	if (comb == RA_RB || comb == RA_RRB)
		el->rra = 0;
	if (comb == RA_RB || comb == RRA_RB)
		el->rrb = 0;
	if (comb == RRA_RB || comb == RRA_RRB)
		el->ra = 0;
	if (comb == RA_RRB || comb == RRA_RRB)
		el->rb = 0;
}

void	do_rotations(t_list **stack_a, t_list **stack_b, t_list el)
{
	update_data(&el);
	while (el.ra > 0 || el.rb > 0 || el.rra > 0 || el.rrb > 0)
	{
		if (el.ra > 0 && el.rb > 0)
			ft_rotate(stack_a, stack_b, 'r');
		if (el.rra > 0 && el.rrb > 0)
			ft_rrotate(stack_a, stack_b, 'r');
		if (el.ra > 0 && el.rb <= 0)
			ft_rotate(stack_a, stack_b, 'a');
		if (el.rb > 0 && el.ra <= 0)
			ft_rotate(stack_a, stack_b, 'b');
		if (el.rra > 0 && el.rrb <= 0)
			ft_rrotate(stack_a, stack_b, 'a');
		if (el.rrb > 0 && el.rra <= 0)
			ft_rrotate(stack_a, stack_b, 'b');
		el.ra--;
		el.rb--;
		el.rra--;
		el.rrb--;
	}
}
