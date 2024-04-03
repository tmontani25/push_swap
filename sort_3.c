/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:07:11 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/03 17:10:47 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_3(t_stack **stack_a)
{
	int	node_1;
	int	node_2;
	int node_3;

	node_1 = (*stack_a)->value;
	node_2 = (*stack_a)->next->value;
	node_3 = (*stack_a)->next->next->value;
	
	if (node_1 > node_2)
		sa(stack_a);
	if (node_3 < node_1 && node_3 < node_2)
		rra(stack_a);
	else if (node_3 < node_1)
	{
		rra(stack_a);
		sa(stack_a);
	}
	return (1);
}