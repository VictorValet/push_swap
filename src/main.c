/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:32:00 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/26 10:24:58 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc == 1)
		return (0);
	argc--;
	list_validity(argc, argv);
	fill_stack(argc, argv, &a, &b);
	if (argc <= 5)
		sort_small(&a, &b);
	else
		sort_large(&a, &b);
	free(a.n);
	free(b.n); 
	return (0);
}
