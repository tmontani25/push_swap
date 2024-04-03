/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:32:03 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/03 17:10:49 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_index(t_stack *stack_a, t_stack *stack_b)
{
	int	index;

	index = 0;
	while(stack_a)
	{
		stack_a->index = index;
		index++;
		stack_a = stack_a->next;
	}
	index = 0;
	while(stack_b)
	{
		stack_b->index = index;
		index++;
		stack_b = stack_b->next;
	}
}
t_stack	*find_smallest(t_stack *stack_a)
{
	t_stack	*smallest;

	smallest = stack_a;
	while(stack_a->next)
	{
		if (smallest->value > stack_a->next->value)
			smallest = stack_a->next;
		stack_a = stack_a->next;
	}
	return (smallest);
}


int	is_above(t_stack *stack)
{

	int	len;
	len = check_stack(stack);
	if (len % 2 == 0)
	{
		if (stack->index <= len / 2 )
			return (1);
		else
			return (0);
	}
	else if (len % 2 != 0)
		{
			if (stack->index <= len + 1)
				return (1);
			else
				return (0);
		}
	return (0);
}

void	set_above(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a)
	{
		stack_a->above = is_above(stack_a);
		stack_a = stack_a->next;
	}
	while (stack_b)
	{
		stack_b->above = is_above(stack_b);
		stack_b = stack_b->next;
	}
}
void	find_target(t_stack *stack_a, t_stack *stack_b)
{
	puts("find_target\n");
	t_stack *temp;
	t_stack	*target;
	long	value;

	value = LONG_MAX;
	temp = stack_a;
	target = NULL;
	while(stack_b)
	{
		while (temp)
		{
			if (temp->value > stack_b->value && value > temp->value)
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
		printf("target: %d\n", stack_b->target->value);
		stack_b = stack_b->next;
	}		
}