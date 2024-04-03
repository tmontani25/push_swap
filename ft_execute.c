/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:50:22 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/03 18:03:21 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_execute(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *cheapest;

    cheapest = NULL;
    cheapest = find_cheapest(stack_b);

// 1 les deux sont en haurt
// 2 les deux sont en bas
// 3  current en haut et target en bas
// 4 current en bas et target en haut

while (cheapest != stack_b )
{
    if (cheapest->above == 1)
        rb(stack_b);
    while (cheapest != stack_b && cheapest->target != stack_a)
    {
        if (cheapest->above == 0 && cheapest->target->above == 0)
            rrr(stack_a, stack_b);
    }
}

    



}