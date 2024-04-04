/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:58:02 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/04 12:05:23 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *find_cheapest(t_stack *stack_b)
{
    t_stack *cheapest;

    cheapest = stack_b;
    while (stack_b)
    {
        if (cheapest->push_cost > stack_b->push_cost)
            cheapest = stack_b;
        stack_b = stack_b->next;
    }
    return (cheapest);
}

int   push_cost2(t_stack *stack_b, t_stack *stack_a, t_stack *current)
{
    int cost_b;
    int cost_a;
    int push_cost;

    cost_b = 0;
    cost_a = 0;
    push_cost = 0;
    if (current->above == 0 && current->target->above == 0)
        cost_b = current->index;
        cost_a = current->target->index;
    if (current->above == 0 && current->target->above == 1)
        cost_b = current->index;
        cost_a = check_stack(stack_a) - current->target->index;
    if (current->above == 1 && current->target->above == 1)
        cost_b = check_stack(stack_b) - current->index;
        cost_a = check_stack(stack_a) - current->target->index;
    if (current->above == 1 && current->target->above == 0)
        cost_b = check_stack(stack_b) - current->index;
        cost_a = current->target->index;
    push_cost = cost_a + cost_b;
    return (push_cost);
}

void    push_cost1(t_stack *stack_a, t_stack *stack_b)
{
    puts("push_cost1\n");
    t_stack *current;

    current = stack_b;
    while (stack_b)
    {
        current->push_cost = push_cost2(stack_b, stack_a, current);
        current = current->next;
        stack_b = stack_b->next;
    }
}