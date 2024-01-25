/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:22:15 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/05 13:44:03 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrotate(t_list **stack_a, t_list **stack_b, char rrot)
{
	t_list	*temp;
	int		size;

	ft_printf("rr%c\n", rrot);
	if ((rrot == 'a' || rrot == 'r') && ft_lstsize(*stack_a) > 1)
	{
		size = ft_lstsize(*stack_a);
		temp = ft_lstlast(*stack_a);
		temp->next = *stack_a;
		*stack_a = temp;
		while (size-- > 1)
			temp = temp->next;
		temp->next = 0;
	}
	if ((rrot == 'b' || rrot == 'r') && ft_lstsize(*stack_b) > 1)
	{
		size = ft_lstsize(*stack_b);
		temp = ft_lstlast(*stack_b);
		temp->next = *stack_b;
		*stack_b = temp;
		while (size-- > 1)
			temp = temp->next;
		temp->next = 0;
	}
}
