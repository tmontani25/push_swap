/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:58:02 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/02 17:09:16 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    on_top(t_stack stack_b)
{
    
}
void    push_cost(t_stack *stack_a, t_stack *stack_b)
{
    while (stack_b)
    {
        stack_b->push_cost = on_top(stack_b)


    }
    
}