/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:07:11 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/21 16:47:08 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_3(t_stack **stack_a)
{
	t_stack	*head;
	t_stack	*middle;
	t_stack	*end;

	head = (*stack_a);
	middle = (*stack_a)->next;
	end = middle->next;

	if (head->value > middle->value)
		sa(stack_a);
	print_stack(stack_a);
	return (1);
}