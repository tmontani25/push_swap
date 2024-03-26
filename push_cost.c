/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:32:03 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/26 16:44:34 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_above(int index, t_stack **stack)
{

	int	len;
	len = check_stack(stack);
	if (index < len / 2)
		return (0);
	else
		return (1);

}
t_stack	*find_target(t_stack *stack_a, t_stack *stack_b)
{
	t_stack *temp;
	temp = stack_a;
	while(stack_b)
	{
		while (temp->value < stack_b->value)
		{
			temp = 
		}


}
int	push_cost(t_stack **stack_a, t_stack **stack_b)
{
	
}