/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_validity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:12:09 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 17:27:09 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_integer(char *str)
{
	int				index;
	int				sign;
	size_t			n;

	index = 0;
	sign = 1;
	n = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-')
		sign *= -1;
	if (str[index] == '+' || str[index] == '-')
		index++;
	if (!str[index])
		return (0);
	while (str[index] >= '0' && str[index] <= '9')
	{
		n = (n * 10) + (str[index] - '0');
		if ((sign > 0 && n > INT_MAX) || (sign < 0 && n > -(long long)INT_MIN))
			return (0);
		index++;
	}
	if (str[index])
		return (0);
	return (1);
}

int	is_unique(int arg, char **argv)
{
	int	comp;

	comp = 1;
	while (comp < arg)
	{
		if (ft_atoi(argv[comp]) == ft_atoi(argv[arg]))
			return (0);
		comp++;
	}
	return (1);
}

void	list_validity(int argc, char **argv)
{
	while (argc > 0)
	{
		if (!is_integer(argv[argc]))
			error(NULL, NULL, NULL);
		if (!is_unique(argc, argv))
			error(NULL, NULL, NULL);
		argc--;
	}
}
