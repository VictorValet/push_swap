/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_candidate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:11:44 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 22:12:41 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t lowest(size_t a, size_t b, size_t c, size_t d)
{
	size_t	low;

	low = a;
	if (b < low)
		low = b;
	if (c < low)
		low = c;
	if (d < low)
		low = d;
	return (low);
}

static size_t total_mvmts(t_mvmts el)
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

t_mvmts	find_best_candidate(t_stack *dest, t_stack *src)
{
	t_mvmts	best;
	t_mvmts	candidate;
	size_t	mvmts;
	size_t	i;

	candidate = calc_mvmts(dest, src, 0);
	best = candidate;
	mvmts = total_mvmts(candidate);
	i = 0;
	while (i < src->size)
	{
		candidate = calc_mvmts(dest, src, i);
		if (total_mvmts(candidate) < mvmts)
		{
			mvmts = total_mvmts(candidate);
			best = candidate;
		}
		i++;
	}
	return (best);
}
