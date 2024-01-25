/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:23:58 by vvalet            #+#    #+#             */
/*   Updated: 2023/05/12 09:32:24 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(int *temp, t_list **list)
{
	if (temp)
		free(temp);
	if (list)
		ft_lstclear(list, del_content);
	write(2, "Error\n", 6);
	exit(0);
}
