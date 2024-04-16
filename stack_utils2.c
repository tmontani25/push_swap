/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:37:13 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/16 16:17:08 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_free(t_stack **stack_a)
{
	t_stack	*temp;

	if (stack_a)
	{
		while ((*stack_a)->next)
		{
			temp = (*stack_a)->next;
			free(stack_a);
			(*stack_a) = temp;
		}
	}
	return (write(2, "Error\n", 6));
}
int	only_digits(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
int	ft_handle_operators(char *str)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (str[j])
	{
		if ((str[j] == '-' || str[j] == '+') && !only_digits(str[j + 1]))
			return (0);
		else
			j++;
	}
	return (1);
}

int	stack_sorted(t_stack *stack_a)
{
	if (stack_a == NULL || stack_a->next == NULL)
		return (1);
	while (stack_a->next != NULL)
	{
		if (stack_a->value > stack_a->next->value)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
