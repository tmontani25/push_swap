/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:58:48 by tmontani          #+#    #+#             */
/*   Updated: 2024/03/14 12:20:47 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int sa(t_stack **head)
{
    t_stack *temp;
    t_stack *second;
    t_stack *first;

    first = (*head);
    second = (*head)->next;


     Node *first = *head;
    Node *second = first->next;

    first->next = second->next;
    second->next = first;
    *head = second
    


    return (temp)



}
void test(int **ptr)
{
	**ptr = 10;

	
}

int main (void)
{
	int i;
	int *ptr;
	
	i = 0;
	ptr = &i;

	test(&ptr);
	printf("valeur de i %d", i);

}


/*void modifierValeurAvecPointeur(int *x) {
    *x = *x + 10;
    printf("Valeur modifiée dans la fonction : %d\n", *x);
}

int main() {
    int valeur = 5;

    // Appel de la fonction avec le passage par référence
    modifierValeurAvecPointeur(&valeur);

    // Affichage de la valeur après l'appel de la fonction (modifiée)
    printf("Valeur après la fonction : %d\n", valeur);

    return 0;
}*/
