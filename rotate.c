/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:57:06 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/14 17:12:07 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack *ft_rotate(t_stack **head)
{
    if (head == NULL || *head == NULL || (*head)->next == NULL)
        return (0); // Rien à faire si la pile est vide ou contient un seul élément

    t_stack *second_node = (*head)->next;
    t_stack *current_node = *head;

    // Trouver le dernier nœud
    while (current_node->next != NULL)
        current_node = current_node->next;

    // Connecter le dernier nœud au deuxième nœud
    current_node->next = *head;
    // Le deuxième nœud devient le nouveau premier nœud
    *head = second_node;
    // Le dernier nœud devient le nouveau dernier nœud
    second_node->next = NULL;

		while (->next)
	{
		printf("node_new: %d", stack_new->value);
		stack_new = stack_new->next;
	}
    return (*head);
}

int ra(t_stack **stack_a)
{
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