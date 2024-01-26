/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:08:46 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/26 09:15:07 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	int		temp;
	size_t	i;

	temp = stack->n[0];
	i = 0;
	while (i < stack->size - 1)
	{
		stack->n[i] = stack->n[i + 1];
		i++;
	}
	stack->n[i] = temp;
}

void	ft_rotate(t_stack *a, t_stack *b, char select)
{
	ft_printf("r%c\n", select);
	if ((select == 'a' || select == 'r') && a->size > 1)
		rotate(a);
	if ((select == 'b' || select == 'r') && b->size > 1)
		rotate(b);
}
