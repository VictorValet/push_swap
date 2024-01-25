/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:09:17 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 21:53:29 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small(t_stack *a, t_stack *b)
{
	t_mvmts	mvmts;

	if (ft_sorted(a, ASC) == TRUE)
		return ;
	while (ft_organized(a, ASC) == FALSE && a->size > 3)
		ft_push(a, b, 'b');
	if (ft_organized(a, ASC) == FALSE)
		ft_swap(a, b, 'a');
	while (b->size > 0)
	{
		mvmts = find_best_candidate(a, b);
		do_rotations(a, b, mvmts);
		ft_push(a, b, 'a');
	}
	while (ft_sorted(a, ASC) == FALSE)
	{
		if ((size_t)a->n[0] >= (a->size + 1) / 2)
			ft_rotate(a, b, 'a');
		else
			ft_rrotate(a, b, 'a');
	}
}
