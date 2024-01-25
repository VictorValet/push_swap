/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:09:17 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/11 12:34:36 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small(t_list **stack_a, t_list **stack_b)
{
	t_list	*best;

	calc_final_pos(stack_a);
	if (ft_sorted(*stack_a, ASC))
		return ;
	while (!ft_organized(*stack_a, ASC) && ft_lstsize(*stack_a) > 3)
		ft_push(stack_a, stack_b, 'b');
	if (!ft_organized(*stack_a, ASC))
		ft_swap(stack_a, stack_b, 'a');
	while (*stack_b)
	{
		fill_data(stack_a, stack_b);
		best = find_best_candidate(*stack_b);
		do_rotations(stack_a, stack_b, *best);
		ft_push(stack_a, stack_b, 'a');
	}
	while (!ft_sorted(*stack_a, ASC))
	{
		if ((**stack_a).f_pos >= (ft_lstsize(*stack_a) + 1) / 2)
			ft_rotate(stack_a, stack_b, 'a');
		else
			ft_rrotate(stack_a, stack_b, 'a');
	}
}
