/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:56:35 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/04 15:14:03 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 static int ft_swap(t_stack **head)
{
	t_stack *temp;

	if (head == NULL || (*head)->next == NULL)
		return (0);
	temp = *head; // temp vaut le premier noeud
	*head = (*head)->next; // head = au deuxieme noeud
	temp->next = (*head)->next; // pointeur next du premier noeud vaut le troisieme
	(*head)->next = temp; //pointeur next du deuxieme noeud vaut le premier noeud
	return (1);
}

int sa(t_stack **stack_a)
{
	if(!ft_swap(stack_a))
		return (0);
	write(1, "sa\n", 3);
	return (1);
}

int sb(t_stack **stack_b)
{
	if(!ft_swap(stack_b))
		return (0);
	write(1, "sb", 2);
	return (1);
}

