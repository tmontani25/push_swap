/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:50:22 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/04 15:16:00 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rotate_b(t_stack *cheapest, t_stack **stack_b)
{
	while (cheapest != (*stack_b))
	{
		if (cheapest->above == 0)
			rrb(stack_b);
		else if (cheapest->above == 1)
			rb(stack_b);
	}
}

void	ft_rotate_a(t_stack *target, t_stack **stack_a)
{
	while (target != (*stack_a))
	{
		if (target->above == 0)
			rra(stack_a);
		if (target->above)
			ra(stack_a);
	}
}

void ft_execute(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *cheapest;

	cheapest = find_cheapest((*stack_b));

	if ((cheapest->above == 1 && cheapest->target->above == 1) 
		|| (cheapest->above = 0 && cheapest->target->above == 0))
	{
		while (cheapest != (*stack_b) && cheapest->target != (*stack_a))
		{
			if (cheapest->above == 1 && cheapest->target->above == 1)
				rr(stack_a, stack_b);
			else if (cheapest->above == 0 && cheapest->target->above == 0)
				rrr(stack_a, stack_b);
		}
	}
		if (cheapest != (*stack_b))
			ft_rotate_b(cheapest, stack_b);
		if (cheapest != (*stack_a))
			ft_rotate_a(cheapest->target, stack_a);
	pb(stack_b, stack_a);
}