/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:13:36 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/22 18:11:07 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
int	check_special_chars(char **array)
{
	int	lines;
	int	j;
	int	n;
	int i;

	j = 0;
	n = 0;
	lines = 0;
	i = 0;
	while (array[lines] != NULL)
		lines++;
	while (i < lines)
	{
		n = 0;
		while (array[j][n] != '\0')
		{
			if(!is_digit(array[j][n]))
				return (1);
			n++;
		}
		j++;
		i++;
	}
		return (0);
}
int	check_same_nb(long nb, t_stack *stack_a)
{
	if (!stack_a)
		return (1);
		while (stack_a)
		{
			if (stack_a->value == nb)
				return (0);
			stack_a = stack_a->next;
		}
	return (1);
}
int	check_stack(t_stack **stack_a)
{
	t_stack *stack_2 = NULL;
	t_stack **stack_b;
	stack_b = &stack_2;
	int count;
	t_stack *current;

	current = *stack_a;
	count = 0;
	while (current)
	{
		current = current->next;
		count++;
	}
	count++;
	if (count == 0)
		return (0);

	//print_stack(stack_a);
	return (count);
}
void print_stack(t_stack **stack_a)
{
	t_stack *current;

	current = *stack_a;
	while (current != NULL)
	{
		printf("node: %d\n", current->value);
		current = current->next;
	}
}
//int main (int argc, char *argv[])
//{
//	printf("%d", check_special_chars(argv + 1));
//}