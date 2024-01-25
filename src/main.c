/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:32:00 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 22:05:09 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack b;

	if (argc == 1)
		return (0);
	argc--;
	list_validity(argc, argv);
	fill_stack(argc, argv, &a, &b);

	int i;
	// ft_push(&a, &b, 'b');
	// ft_rrotate(&a, &b, 'a');
	// ft_rotate(&a, &b, 'a');
	// ft_swap(&a, &b, 'a');
	// i = 0;
	// ft_printf("Stack a: ");
	// while (i < a.size)
	// {
	// 	ft_printf("%i ", a.n[i]);
	// 	i++;
	// }
	// ft_printf("\n");
	// i = 0;
	// ft_printf("Stack b: ");
	// while (i < b.size)
	// {
	// 	ft_printf("%i ", b.n[i]);
	// 	i++;
	// }
	// ft_printf("\n");
	
	if (argc <= 5)
		sort_small(&a, &b);
	else
		sort_large(&a, &b);
	
	i = 0;
	ft_printf("Stack a: ");
	while (i < a.size)
	{
		ft_printf("%i ", a.n[i]);
		i++;
	}
	ft_printf("\n");
	// i = 0;
	// ft_printf("Stack b: ");
	// while (i < b.size)
	// {
	// 	ft_printf("%i ", b.n[i]);
	// 	i++;
	// }
	// ft_printf("\n");

	free(a.n);
	free(b.n);
	return (0);
}
