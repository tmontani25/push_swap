/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:55:51 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/22 18:11:11 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_reverse_rotate(t_stack **head)
{
    if (head == NULL || (*head)->next == NULL)
        return (0); // Rien à faire si la pile est vide ou contient un seul élément

    t_stack *current_node = *head;
    t_stack *last_node;

    // Trouver l'avant-dernier nœud
    while (current_node->next != NULL && current_node->next->next != NULL) {
        current_node = current_node->next;
    }

    last_node = current_node->next;
    current_node->next = NULL;
    last_node->next = *head;
    *head = last_node;

   puts("stack after reverse rotate: ");
   print_stack(head);
    return(1);
}

int rrr(t_stack **stack_a, t_stack **stack_b)
{
    int a;
    int b;

   a = ft_reverse_rotate(stack_a);
   b = ft_reverse_rotate(stack_b);

    if (a == 0 || b == 0)
        return (0);
    write(1, "rrr", 4);
    return (1);


    
}
int rra(t_stack **stack_a)
{
    if(!ft_reverse_rotate(stack_a))
        return (0);
	write(1, "rra", 3);
	return (1);
}

int	rrb(t_stack **stack_b)
{
	if (!ft_reverse_rotate(stack_b))
		return (0);
	write(1, "rrb", 3);
	return (1);
}