/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:54:36 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 15:03:14 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*fill_stack(int argc, char **argv)
{
	t_list	*list;
	int		*temp;
	t_list	*new;
	int		index;

	list = 0;
	index = 1;
	while (index <= argc)
	{
		temp = (int *)malloc(1 * sizeof(int));
		if (!temp)
			error(temp, &list);
		*temp = ft_atoi(argv[index]);
		new = ft_lstnew(temp);
		if (!new)
			error(temp, &list);
		ft_lstadd_back(&list, new);
		index++;
	}
	return (list);
}
