/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:44:01 by ldick             #+#    #+#             */
/*   Updated: 2024/06/02 13:54:07 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_add_end(t_stack **stack, t_stack *new)
{
	t_stack	*temp;

	if (!new)
		return ;
	if (!(*stack))
		ft_do_somethign_you_retard(stack, new);
	else
	{
		temp = (*stack);
		if (temp == NULL)
			(*stack) = new;
		else
		{
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new;
			new->prev = temp;
		}
	}
}
