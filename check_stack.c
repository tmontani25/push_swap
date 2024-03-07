/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:13:36 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/07 17:52:38 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_stack(t_stack **stack_a)
{

	int count;
	t_stack *current;

	current = *stack_a;
	count = 0;
	while (current->next)
	{
		current = current->next;
		count++;
	}
	count++;
	printf("number of nodes: %d\n", count);
	print_stack(stack_a);
	return(count);
}
void print_stack(t_stack **stack_a)
{
	t_stack *current;

	current = *stack_a;
	while (current->next)
	{
		printf("node: %d\n", current->value);
		current = current->next;
	}

}
