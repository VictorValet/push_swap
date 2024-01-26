/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_rotations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:16:41 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/26 09:14:36 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* In an organized stack, returns the number of rotations needed to insert
number 'nbr' at the top of the given stack. (COULD BE BETTER...)*/
size_t	calc_rotations(int nbr, t_stack *stack)
{
	size_t	rotations;

	if (((nbr < ft_lstmin(stack) || nbr > ft_lstmax(stack)) 
			&& stack->n[0] == ft_lstmin(stack))
		|| (nbr < stack->n[0] && nbr > stack->n[stack->size - 1])
		|| stack->size < 2) 
		return (0);
	rotations = 1;
	if (nbr > ft_lstmax(stack) || nbr < ft_lstmin(stack))
	{
		while (rotations < stack->size - 1 
			&& stack->n[rotations] != ft_lstmin(stack))
			rotations++;
	}
	else
	{
		while (rotations < stack->size - 1 && (nbr > stack->n[rotations]
				|| nbr < stack->n[rotations - 1]))
			rotations++;
	}
	return (rotations);
}
