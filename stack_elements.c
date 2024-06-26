/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:32:03 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/16 15:37:52 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_index(t_stack *stack_a, t_stack *stack_b)
{
	int		index_a;
	int		index_b;
	t_stack	*tempa;
	t_stack	*tempb;

	tempa = stack_a;
	tempb = stack_b;
	index_a = 1;
	while (tempa)
	{
		tempa->index = index_a++;
		tempa = tempa->next;
	}
	index_b = 1;
	while (tempb)
	{
		tempb->index = index_b++;
		tempb = tempb->next;
	}
}

t_stack	*find_smallest(t_stack *stack_a)
{
	t_stack	*smallest;

	smallest = stack_a;
	while (stack_a->next)
	{
		if (smallest->value > stack_a->next->value)
			smallest = stack_a->next;
		stack_a = stack_a->next;
	}
	return (smallest);
}

int	is_above(t_stack *stack, int len)
{
	if (len % 2 == 0)
	{
		if (stack->index <= len / 2)
			return (1);
		else
			return (0);
	}
	else if (len % 2 != 0)
	{
		if (stack->index <= len / 2 + 1)
			return (1);
		else
			return (0);
	}
	return (0);
}

void	set_above(t_stack *stack_a, t_stack *stack_b)
{
	int	len_a;
	int	len_b;

	len_a = check_stack(stack_a);
	len_b = check_stack(stack_b);
	while (stack_a)
	{
		stack_a->above = is_above(stack_a, len_a);
		stack_a = stack_a->next;
	}
	while (stack_b)
	{
		stack_b->above = is_above(stack_b, len_b);
		stack_b = stack_b->next;
	}
}

void	find_target(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*temp;
	t_stack	*target;
	long	value;

	target = NULL;
	while (stack_b)
	{
		temp = stack_a;
		value = LONG_MAX;
		while (temp)
		{
			if (temp->value > stack_b->value && temp->value < value)
			{
				value = temp->value;
				target = temp;
			}
			temp = temp->next;
		}
		if (target == NULL)
			stack_b->target = find_smallest(stack_a);
		else
			stack_b->target = target;
		stack_b = stack_b->next;
	}
}
