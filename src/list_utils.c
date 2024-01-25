/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:48:48 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 22:09:21 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstmax(t_stack *stack)
{
	int		max;
	size_t	i;

	max = stack->n[0];
	i = 0;
	while (i < stack->size)
	{
		if (max < stack->n[i])
			max = stack->n[i];
		i++;
	}
	return (max);
}

int	ft_lstmin(t_stack *stack)
{
	int		min;
	size_t	i;

	min = stack->n[0];
	i = 0;
	while (i < stack->size)
	{
		if (min > stack->n[i])
			min = stack->n[i];
		i++;
	}
	return (min);
}

int	ft_sorted(t_stack *stack, int way)
{
	size_t	i;

	i = 0;
	if (stack->size == 0)
		return (TRUE);
	while (i < stack->size - 1)
	{
		if (stack->n[i] * way > stack->n[i + 1] * way)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	ft_organized(t_stack *stack, int way)
{
	int		limit;
	size_t	i;

	if (stack->size == 0)
		return (TRUE);
	limit = ft_lstmax(stack);
	if (way == DESC)
		limit = ft_lstmin(stack);
	i = 0;
	while (i < stack->size - 1)
	{
		if (stack->n[i] != limit && stack->n[i] * way > stack->n[i + 1] * way)
			return (FALSE);
		i++;
	}
	if (stack->n[i] != limit && stack->n[i] * way > stack->n[0] * way)
		return (FALSE);
	return (TRUE);
}
