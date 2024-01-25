/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_rotations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:16:41 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/11 14:10:46 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calc_rotations(int nbr, t_list *dest)
{
	int	rotations;

	rotations = 0;
	if (!dest || !dest->next || (nbr < *(int *)dest->content
			&& nbr > *(int *)ft_lstlast(dest)->content))
		return (rotations);
	if (nbr > ft_lstmax(dest) || nbr < ft_lstmin(dest))
	{
		while (*(int *)dest->content != ft_lstmin(dest))
		{
			rotations++;
			dest = dest->next;
		}
	}
	else
	{
		rotations++;
		while (dest->next && (nbr < *(int *)dest->content
				|| nbr > *(int *)dest->next->content))
		{
			rotations++;
			dest = dest->next;
		}
	}
	return (rotations);
}
