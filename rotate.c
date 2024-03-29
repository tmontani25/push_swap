/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:57:06 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/25 15:07:55 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_rotate(t_stack **head)
{
    puts("inside");
    if (head == NULL || (*head)->next == NULL)
        return (0); // Rien à faire si la pile est vide ou contient un seul élément

    t_stack *first_node = (*head);
    t_stack *second_node = (*head)->next;
    t_stack *current_node = *head;

    // Trouver le dernier nœud
    current_node = find_last_node(*head);
    current_node->next = first_node; // faire pointer le dernier noeud vers le premier
    (*head) = second_node;
    first_node->next = NULL;

   puts("stack after rotate: ");
   print_stack(head);
    return(1);
}
int ra(t_stack **stack_a)
{
    if(!ft_rotate(stack_a))
        return (0);
	write(1, "ra", 2);
	return (1);
}

int	rb(t_stack **stack_b)
{
	if (!ft_rotate(stack_b))
		return (0);
	write(1, "rb", 2);
	return (1);
}