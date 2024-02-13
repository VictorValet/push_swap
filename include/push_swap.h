/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:23:54 by vvalet            #+#    #+#             */
/*   Updated: 2024/02/13 15:37:06 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# define ASC 1
# define DESC -1
# define RA_RB 0
# define RRA_RRB 1
# define RA_RRB 2
# define RRA_RB 3

typedef struct s_stack
{
	int		*n;
	size_t	size;
}	t_stack;

typedef struct s_mvmts
{
	int	ra;
	int	rb;
	int	rra;
	int	rrb;
}	t_mvmts;

/* Stack Management */
void	list_validity(int argc, char **argv);
void	fill_stack(size_t argc, char **argv, t_stack *a, t_stack *b);
void	error(int *temp, t_stack *a, t_stack *b);

/* Sorting Functions */
void	sort_small(t_stack *a, t_stack *b);
void	sort_large(t_stack *a, t_stack *b);

/* Operations */
void	ft_push(t_stack *a, t_stack *b, char select);
void	ft_rotate(t_stack *a, t_stack *b, char select);
void	ft_rrotate(t_stack *a, t_stack *b, char select);
void	ft_swap(t_stack *a, t_stack *b, char select);

/* Advanced Operations*/
size_t	calc_rotations(int nbr, t_stack *stack);
t_mvmts	calc_mvmts(t_stack *a, t_stack *b, int pos);
t_mvmts	find_best_candidate(t_stack *dest, t_stack *src);
void	do_rotations(t_stack *a, t_stack *b, t_mvmts el);

/* List Utils */
// void	del_content(void *content);
int		ft_lstmax(t_stack *stack);
int		ft_lstmin(t_stack *stack);
int		ft_organized(t_stack *stack, int way);
int		ft_sorted(t_stack *stack, int way);

#endif