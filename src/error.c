/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:23:58 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 17:27:28 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(int *temp, t_stack *a, t_stack *b)
{
	if (temp)
		free(temp);
	if (a != NULL)
		free(a->n);
	if (b != NULL)
		free(b->n);
	write(2, "Error\n", 6);
	exit(0);
}
