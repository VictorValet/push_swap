/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:22:15 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 21:58:22 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrotate(t_stack *stack)
{
	int		temp;
	size_t  i;
	
	temp = stack->n[stack->size - 1];
	i = stack->size - 1;
	while (i > 0)
	{
		stack->n[i] = stack->n[i - 1];
		i--;
	}
	stack->n[0] = temp;
}

void	ft_rrotate(t_stack *a, t_stack *b, char select)
{
	ft_printf("rr%c\n", select);
	if ((select == 'a' || select == 'r') && a->size > 1)
		rrotate(a);
	if ((select == 'b' || select == 'r') && b->size > 1)
		rrotate(b);
}
