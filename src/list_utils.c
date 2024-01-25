/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:48:48 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/11 13:34:15 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstmax(t_list *stack)
{
	int	max;

	max = *(int *)(stack->content);
	while (stack->next)
	{
		if (max < *(int *)stack->next->content)
			max = *(int *)stack->next->content;
		stack = stack->next;
	}
	return (max);
}

int	ft_lstmin(t_list *stack)
{
	int	min;

	min = *(int *)(stack->content);
	while (stack->next)
	{
		if (min > *(int *)stack->next->content)
			min = *(int *)stack->next->content;
		stack = stack->next;
	}
	return (min);
}

int	ft_sorted(t_list *stack, int way)
{
	while (stack->next)
	{
		if (*(int *)stack->content * way > *(int *)stack->next->content * way)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	ft_organized(t_list *stack, int way)
{
	int		limit;
	t_list	*ptr;

	limit = ft_lstmax(stack);
	if (way == DESC)
		limit = ft_lstmin(stack);
	ptr = stack;
	while (ptr->next)
	{
		if (*(int *)ptr->content != limit && *(int *)ptr->content * way
			> *(int *)ptr->next->content * way)
			return (0);
		ptr = ptr->next;
	}
	if (*(int *)ptr->content != limit
		&& *(int *)ptr->content > *(int *)stack->content)
		return (0);
	return (1);
}

void	del_content(void *content)
{
	if (content)
		free(content);
}
