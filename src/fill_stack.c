/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:54:36 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 22:03:28 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Returns the final position of number by checking how many numbers are
smaller than itself. */
static int	final_pos(int n, t_stack *stack)
{
	int pos;
	int i;

	pos = 0;
	i = 0;
	while (i < stack->size)
	{
		if (n > stack->n[i])
			pos++;
		i++;
	}
	return (pos);
}

/* Fills the stack 'b' with the numbers passed as arguments, copies their final
positions into stack 'a' and clears stack 'b'. */
void	fill_stack(int argc, char **argv, t_stack *a, t_stack *b)
{
	a->n = ft_calloc(argc, sizeof(int));
	if (a->n == NULL)
		error(NULL, NULL, NULL);
	b->n = ft_calloc(argc, sizeof(int));
	if (b->n == NULL)
		error(NULL, a, NULL);
	a->size = argc;
	b->size = argc;
	while (argc > 0)
	{
		b->n[argc - 1] = ft_atoi(argv[argc]);
		argc--;
	}
	while (argc < a->size)
	{
		a->n[argc] = final_pos(b->n[argc], b);
		argc++;
	}
	// ft_bzero(b, b->size *sizeof(int));
	b->size = 0;
}
