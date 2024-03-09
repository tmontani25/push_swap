/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:13:36 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/09 15:40:33 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_special_chars(char **array)
{
	while (array[j])
	{
		while (array[j][n])
		{
			
		}
	}
}
int	check_same_nb(int nb, t_stack *stack_a)
{
	if (stack_a != NULL)
	{
		while (stack_a->next)
		{
			if (stack_a->value == nb)
				return (0);
			stack_a = stack_a->next;
		}
	}
	return (1);
}
void	check_stack(t_stack **stack_a)
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
	printf("node: %d\n", current->value);
}
