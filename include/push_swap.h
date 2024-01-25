/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:23:54 by vvalet            #+#    #+#             */
/*   Updated: 2024/01/25 13:52:13 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"

# define ASC 1
# define DESC -1
# define RA_RB 1
# define RRA_RRB 2
# define RA_RRB 3
# define RRA_RB 4

/* Stack Management */
void	list_validity(int argc, char **argv);
t_list	*fill_stack(int argc, char **argv);
void	error(int *temp, t_list **list);

/* Sorting Functions */
void	sort_large(t_list **stack_a, t_list **stack_b);
void	sort_small(t_list **stack_a, t_list **stack_b);

/* Operations */
void	ft_push(t_list **dest, t_list **src, char dir);
void	ft_rotate(t_list **stack_a, t_list **stack_b, char rot);
void	ft_rrotate(t_list **stack_a, t_list **stack_b, char rrot);
void	ft_swap(t_list **stack_a, t_list **stack_b, char swap);

/* Advanced Operations*/
void	calc_final_pos(t_list **stack);
int		calc_rotations(int nbr, t_list *stack);
void	fill_data(t_list **stack_a, t_list **stack_b);
t_list	*find_best_candidate(t_list *stack);
void	do_rotations(t_list **stack_a, t_list **stack_b, t_list el);

/* List Utils */
void	del_content(void *content);
int		ft_lstmax(t_list *stack);
int		ft_lstmin(t_list *stack);
int		ft_organized(t_list *stack, int way);
int		ft_sorted(t_list *stack, int way);

#endif