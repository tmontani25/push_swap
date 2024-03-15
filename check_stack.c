/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:13:36 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/15 15:11:57 by tmontani         ###   ########.fr       */
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
	if (count == 0)
		return ;
	puts("\n stack avant ra:\n");
	print_stack(stack_a);
	rra(stack_a);

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
//int main (int argc, char *argv[])
//{
//	printf("%d", check_special_chars(argv + 1));
//}