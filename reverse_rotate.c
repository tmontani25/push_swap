/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:55:51 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/15 15:28:38 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_reverse_rotate(t_stack **head)
{
    if (head == NULL || (*head)->next == NULL)
        return (0); // Rien à faire si la pile est vide ou contient un seul élément

    t_stack *second_node = (*head)->next;
    t_stack *current_node = *head;
    t_stack *last_node;

    // Trouver le dernier nœud
    current_node = find_last_node(*head);
    last_node = current_node;
    current_node->next = (*head);
    (*head) = current_node;
    last_node->next = NULL;

   puts("stack after reverse rotate: ");
   print_stack(head);
    return(1);
}

int rra(t_stack **stack_a)
{
    if(!ft_reverse_rotate(stack_a))
        return (0);
	write(1, "ra", 2);
	return (1);
}

int	rrb(t_stack **stack_b)
{
	if (!ft_reverse_rotate(stack_b))
		return (0);
	write(1, "rb", 2);
	return (1);
}