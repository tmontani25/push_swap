/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:50:22 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/03 17:10:40 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_execute(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *cheapest;

    cheapest = NULL;
    cheapest = find_cheapest(stack_b);

    if (cheapest->above == 1 && cheapest->target->above == 1)
    {
        

    }



}