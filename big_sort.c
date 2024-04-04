/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:28:04 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/04 12:05:21 by tmontani         ###   ########.fr       */
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
	t_stack *cheapest;

	sa_len = 0;
	sb_len = 0;
	stack_b = NULL;
	index = 1;
	cheapest = NULL;
	push_in_b(stack_a, &stack_b);
	sort_3(stack_a);
	puts("stack_a after sort_3:\n");
	print_stack(stack_a);
	while (stack_b)
	{
		find_target(*stack_a, stack_b); // trouver toutes les targets avant de push le nombre
		find_index((*stack_a), stack_b);//trouver chaque index des deux stacks
		set_above((*stack_a), stack_b); // trouver pour chaque noeud s'il est dans la partie sup ou inf
		push_cost1((*stack_a), stack_b);	// calculer le push_cost grace aux informations contenue dans chaque noeud
		ft_execute(stack_a, &stack_b);	//executer les mouvements necessaire apres avoir trouver le cheapest
		puts("stack_a apres execute\n");
		print_stack(stack_a);
		stack_b = stack_b->next;
	}
}