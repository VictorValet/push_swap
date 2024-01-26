/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 09:31:13 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/26 09:15:01 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack *src, t_stack *dest)
{
	size_t	i;

	i = dest->size;
	while (i > 0)
	{
		dest->n[i] = dest->n[i - 1];
		i--;
	}
	dest->n[0] = src->n[0];
	dest->size++;
	i = 0;
	while (i < src->size - 1)
	{
		src->n[i] = src->n[i + 1];
		i++;
	}
	src->n[i] = 0;
	src->size--;
}

void	ft_push(t_stack *a, t_stack *b, char select)
{
	ft_printf("p%c\n", select);
	if (select == 'b')
		push(a, b);
	if (select == 'a')
		push(b, a);
}
