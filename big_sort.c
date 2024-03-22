/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:28:04 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/22 16:05:37 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*push_in_b(t_stack **stack_a, t_stack **stack_b)
{
	while((*stack_a)->next->next->next)
	{

	}
	
}
void big_sort(t_stack **stack_a, int stack_len)
{
	t_stack *stack_b;

	stack_b = NULL;
	push_in_b(stack_a, &stack_b);
	print_stack(stack_a);
	print_stack(stack_b);

}