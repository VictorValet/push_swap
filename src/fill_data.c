/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:08:50 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/11 13:53:12 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_data(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr;
	int		index;

	ptr = *stack_b;
	index = 0;
	while (ptr)
	{
		ptr->c_pos = index++;
		ptr->ra = calc_rotations(*(int *)ptr->content, *stack_a);
		ptr->rra = ft_lstsize(*stack_a) - ptr->ra;
		ptr->rb = ptr->c_pos;
		ptr->rrb = ft_lstsize(*stack_b) - ptr->c_pos;
		ptr = ptr->next;
	}
}
