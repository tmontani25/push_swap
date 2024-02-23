/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:20:25 by tmontani          #+#    #+#             */
/*   Updated: 2024/02/23 15:48:54 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void add_new_node(long atoi_result, t_stack **stack_a)
{
	t_stack *new_node;

	new_node = malloc(sizeof(t_stack *));
	if (!new_node)
		return ;
	(*stack_a)->value = atoi_result;
	(*stack_a)->next = NULL;

	printf("value: %d", value);
	//find_last_node() 
}
void	ft_handle_single_str(char **array, t_stack **stack_a)
{
	long	atoi_result;
	int		j;

	atoi_result = 0;
	j = 0;
	while(array)
	{
		atoi_result = ft_atoi(array[j]);
		add_new_node(atoi_result, stack_a);
	}
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
		ft_handle_single_str(result_of_split, &stack_a);
	}
	else
		return (0);
		/*while (argv)
		{
			ft_handle_multiple_str(argv);
			argv++;
		}*/

}
