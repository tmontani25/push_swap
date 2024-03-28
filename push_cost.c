/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:32:03 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/28 17:14:52 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_smallest(t_stack *stack_a)
{
	t_stack	*smallest;

	smallest = stack_a;
	while(stack_a)
	{
		if (smallest->value > stack_a->next->value)
			smallest = stack_a->next;
		stack_a = stack_a->next;
	}
	return (smallest);
}


int	is_above(int index, t_stack **stack)
{

	int	len;
	len = check_stack(stack);
	if (index < len / 2)
		return (0);
	else
		return (1);

}
void	find_target(t_stack *stack_a, t_stack *stack_b)
{
	puts("find_target\n");
	t_stack *temp;
	t_stack	*target;
	long	value;

	value = LONG_MAX;
	temp = stack_a;
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
		
		if (!target)
			stack_b->target = find_smallest(stack_a);
		else
			stack_b->target = target;
		printf("target: %d\n", stack_b->target->value);
		stack_b = stack_b->next;
	}		
}

//int	push_cost(t_stack **stack_a, t_stack **stack_b)