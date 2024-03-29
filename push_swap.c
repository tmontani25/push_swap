/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:20:25 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/25 14:43:08 by tmontani         ###   ########.fr       */
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

	new_node = malloc(sizeof(t_stack));

	if (!new_node)
		return ;
	new_node->value = atoi_result;
	new_node->next = NULL;
	if (!(*stack_a))
		*stack_a = new_node;
	else
		find_last_node(*stack_a)->next = new_node;
}

int	ft_handle_str(char **array, t_stack **stack_a)
{
/*la fonction prend un pointeur qui pointe sur un autre (stack_a)
 qui pointe un element (noeud) de type t_stack*/
	long	atoi_result;
	int		j;
	int		stack_len;

	atoi_result = 0;
	j = 0;
	while(array[j])
	{
		if(check_special_chars(array))
		return (write(1, "Error special chars", 21));
		atoi_result = ft_atoi(array[j]);
		if (atoi_result > INT_MAX || atoi_result < INT_MIN)
		{
			puts("inside");
			return (write(1, "Error int over", 14));
		}
		if(!check_same_nb(atoi_result, *stack_a))
			return(write(1, "Error same", 11));
		add_new_node(atoi_result, stack_a);
		j++;
	}
	stack_len = check_stack(stack_a);
	send_to_algo(stack_a, stack_len);
	return (0);
}

int main (int argc, char **argv)
{
	t_stack *stack_a;
	char	**result_of_split;

	stack_a = NULL;
	if (argc < 2)
		return (write(1, "Error\n", 6));
	if (argc == 2)
	{
		result_of_split = ft_split(argv[1], ' ');
//		printf("first nb: %c\n\n", result_of_split[0][1]);
		ft_handle_str(result_of_split, &stack_a);
	}
	else
	//argv +1 correspond au tableau de tableau argv le +1 skip le a.out
		ft_handle_str(argv+1, &stack_a);
}
