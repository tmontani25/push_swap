/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:07:11 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/12 12:00:11 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*t_stack	*find_biggest(t_stack **stack_a)
{
	t_stack *biggest;

	biggest = (*stack_a);
	while (stack_a)
	{
		if  (biggest->value < (*stack_a)->next->value)
			biggest = (*stack_a)->next;
		(*stack_a) = (*stack_a)->next;
	}
	return (biggest);
		
}*/
void	sort_3(t_stack **stack_a)
{
// 	int	node_1;
// 	int	node_2;
// 	int	node_3;

	// node_1 = (*stack_a)->value;
	// node_2 = (*stack_a)->next->value;
	// node_3 = (*stack_a)->next->next->value;
	//printf("node_1: %d\n", node_1);
	//printf("node_2: %d\n", node_2);
	//printf("node_3: %d\n", node_3);
	if ((*stack_a)->value > (*stack_a)->next->value && (*stack_a)->value > (*stack_a)->next->next->value)
		ra(stack_a);
	else if ((*stack_a)->next->value > (*stack_a)->value && (*stack_a)->next->value > (*stack_a)->next->next->value)
		rra(stack_a);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}