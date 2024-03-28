/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:28:04 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/28 16:48:37 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_in_b(t_stack **stack_a, t_stack **stack_b)
{
	while((*stack_a)->next->next->next)
	{
		pa(stack_a, stack_b);
	}
}
void big_sort(t_stack **stack_a, int stack_len)
{
	t_stack *stack_b;
	int	sa_len;
	int sb_len;
	int	index;

	sa_len = 0;
	sb_len = 0;
	stack_b = NULL;
	index = 1;
	push_in_b(stack_a, &stack_b);
	sort_3(stack_a);
	puts("stack after sort3:\n");
	print_stack(stack_a);

	find_target(*stack_a, stack_b);
	/*while (stack_b)
	{
		find_target(*stack_a, stack_b);
		find_index();
		is_above(stack_b->index, &stack_b);
		push_cost(stack_a, stack_b)
		ft_execute(stack_a, stack_b);
	}*/

}