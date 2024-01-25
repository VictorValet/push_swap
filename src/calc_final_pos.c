/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_final_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:14:38 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/12 11:03:33 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_final_pos(t_list **stack)
{
	t_list	*ptr;
	t_list	*el;

	el = *stack;
	while (el)
	{
		ptr = *stack;
		el->f_pos = 0;
		while (ptr)
		{
			if (*(int *)el->content > *(int *)ptr->content)
				el->f_pos++;
			ptr = ptr->next;
		}
		el = el->next;
	}
}
