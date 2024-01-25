/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:09:17 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 21:54:22 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_large(t_stack *a, t_stack *b)
{
	t_mvmts	mvmts;
	size_t	size;

	size = a->size;
	while (ft_organized(a, ASC) == FALSE)
	{
		ft_push(a, b, 'b');
		if (b->size > 0 && (size_t)b->n[0] > size / 2)
			ft_rotate(a, b, 'b');
	}
	while (b->size > 0)
	{
		mvmts = find_best_candidate(a, b);
		do_rotations(a, b, mvmts);
		ft_push(a, b, 'a');
	}
	while (ft_sorted(a, ASC) == FALSE)
	{
		if ((size_t)a->n[0] > size / 2)
			ft_rotate(a, b, 'a');
		else
			ft_rrotate(a, b, 'a');
	}
}
