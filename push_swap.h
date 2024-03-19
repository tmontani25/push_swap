/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:43:15 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/19 17:03:01 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"
typedef struct s_stack 
{
	int value;
	struct s_stack* next;
}					t_stack;


void check_stack(t_stack **stack_a);
void print_stack(t_stack **stack_a);
int	check_same_nb(int nb, t_stack *stack_a);
t_stack	*find_last_node(t_stack *stack_a);
int	check_special_chars(char **array);
int sa(t_stack **stack_a);
int sb(t_stack **stack_b);
int ra(t_stack **stack_a);
int rra(t_stack **stack_a);
int	rrb(t_stack **stack_b);
int	pa(t_stack **stack_a, t_stack **stack_b);
int pb(t_stack **stack_b, t_stack **stack_a);

#endif
