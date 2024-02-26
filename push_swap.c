/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:20:25 by tmontani          #+#    #+#             */
/*   Updated: 2024/02/26 17:17:10 by tmontani         ###   ########.fr       */
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

void add_new_node(long atoi_result, t_stack **stack_a)
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

void	ft_handle_str(char **array, t_stack **stack_a)
{
	long	atoi_result;
	int		j;

	atoi_result = 0;
	j = 0;
	while(array[j])
	{
		atoi_result = ft_atoi(array[j]);
		add_new_node(atoi_result, stack_a);
		j++;
	}
	/*t_stack *current_node = *stack_a;
		while(current_node)
	{
		printf("%d", current_node->value);
		current_node = current_node->next;
	}*/
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
			result_of_split = ft_split(argv[1], ' ');
		ft_handle_str(result_of_split, &stack_a);
	}
	else
		ft_handle_str(argv+1, &stack_a);
			return (0);
		/*while (argv)
		{
			ft_handle_multiple_str(argv);
			argv++;
		}*/

}
