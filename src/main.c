/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:32:00 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/12 10:01:12 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc == 1)
		return (0);
	argc--;
	list_validity(argc, argv);
	stack_a = fill_stack(argc, argv);
	stack_b = 0;
	if (argc <= 5)
		sort_small(&stack_a, &stack_b);
	else
		sort_large(&stack_a, &stack_b);
	ft_lstclear(&stack_a, del_content);
	return (0);
}
