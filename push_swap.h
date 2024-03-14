/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:43:15 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/12 19:43:48 by tmontani         ###   ########.fr       */
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
enum StackOperation {
    SA, // Swap a
    SB, // Swap b
    SS, // sa and sb at the same time
    PA, // Push a
    PB, // Push b
    RA, // Rotate a
    RB, // Rotate b
    RR, // ra and rb at the same time
    RRA, // Reverse rotate a
    RRB, // Reverse rotate b
    RRR // rra and rrb at the same time
};
void check_stack(t_stack **stack_a);
void print_stack(t_stack **stack_a);
int	check_same_nb(int nb, t_stack *stack_a);
int	check_special_chars(char **array);

#endif
