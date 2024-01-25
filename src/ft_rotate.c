/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:08:46 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/05 13:44:09 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **stack_a, t_list **stack_b, char rot)
{
	t_list	*temp;

	ft_printf("r%c\n", rot);
	if ((rot == 'a' || rot == 'r') && ft_lstsize(*stack_a) > 1)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		ft_lstlast(*stack_a)->next = temp;
		temp->next = NULL;
	}
	if ((rot == 'b' || rot == 'r') && ft_lstsize(*stack_b) > 1)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		ft_lstlast(*stack_b)->next = temp;
		temp->next = NULL;
	}
}
