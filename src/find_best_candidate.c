/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_candidate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:11:44 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/11 13:59:21 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowest(int a, int b, int c, int d)
{
	int	low;

	low = a;
	if (b < low)
		low = b;
	if (c < low)
		low = c;
	if (d < low)
		low = d;
	return (low);
}

int	calc_mvmts(t_list el)
{
	int	ra_rb;
	int	rra_rrb;
	int	ra_rrb;
	int	rra_rb;

	if (el.ra >= el.rb)
		ra_rb = el.ra;
	else
		ra_rb = el.rb;
	if (el.rra >= el.rrb)
		rra_rrb = el.rra;
	else
		rra_rrb = el.rrb;
	ra_rrb = el.ra + el.rrb;
	rra_rb = el.rra + el.rrb;
	return (lowest(ra_rb, rra_rrb, ra_rrb, rra_rb));
}

t_list	*find_best_candidate(t_list *stack)
{
	t_list	*best;
	t_list	*candidate;
	int		mvmts;

	best = stack;
	candidate = stack;
	mvmts = calc_mvmts(*stack);
	while (candidate)
	{
		if (calc_mvmts(*candidate) < mvmts)
		{
			mvmts = calc_mvmts(*candidate);
			best = candidate;
		}
		candidate = candidate->next;
	}
	return (best);
}
