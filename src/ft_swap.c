/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:34:31 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/26 09:15:20 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	temp;

	temp = stack->n[0];
	stack->n[0] = stack->n[1];
	stack->n[1] = temp;
}

void	ft_swap(t_stack *a, t_stack *b, char select)
{
	ft_printf("s%c\n", select);
	if ((select == 'a' || select == 'r') && a->size > 1)
		swap(a);
	if ((select == 'b' || select == 'r') && b->size > 1)
		swap(b);
}
