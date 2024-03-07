/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:20:25 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/07 17:16:33 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_last_node(t_stack *stack_a)
{
    t_stack *current;
	
	current = stack_a;

    while (current->next)
        current = current->next;
    return (current);
}

void	add_new_node(long atoi_result, t_stack **stack_a)
{
	t_stack *new_node;

	new_node = malloc(sizeof(t_stack *));
	if (!new_node)
		return ;
	new_node->value = atoi_result;
	new_node->next = NULL;
	if (!(*stack_a))
		*stack_a = new_node;
	else
		find_last_node(*stack_a)->next = new_node;
}

void	ft_handle_str(char **array, t_stack **stack_a_pointer)
{
/*la fonction prend un pointeur qui pointe sur un autre (stack_a)
 qui pointe un element (noeud) de type t_stack*/
	long	atoi_result;
	int		j;

	atoi_result = 0;
	j = 0;
	while(array[j])
	{
		atoi_result = ft_atoi(array[j]);
		add_new_node(atoi_result, stack_a_pointer);
		j++;
	}
	check_stack(stack_a_pointer);
}

int test(int res)
{
	res = 3;
	return (res);
}
int main (int argc, char **argv)
{
	t_stack *stack_a;
	char	**result_of_split;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		puts("split");
		result_of_split = ft_split(argv[1], ' ');
		printf("first nb: %c\n\n", result_of_split[0][1]);
		ft_handle_str(result_of_split, &stack_a);
	}
	else
	//argv +1 correspond au tableau de tableau argv le +1 skip le a.out
		ft_handle_str(argv+1, &stack_a);
	int res = 4;

	res = test(res);
	printf("\nres  %d\n", res);
	return (0);
}
