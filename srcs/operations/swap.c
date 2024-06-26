/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:33:09 by ldick             #+#    #+#             */
/*   Updated: 2024/07/01 16:15:15 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap_a(t_stack *stack, char *printdis)
{
	int	tmp;

	if (stack->len_a < 2)
		return ;
	tmp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = tmp;
	printdisstuff(printdis);
}

void	swap_b(t_stack *stack, char *printdis)
{
	int	tmp;

	if (stack->len_a < 2)
		return ;
	tmp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_a[1];
	stack->stack_a[1] = tmp;
	printdisstuff(printdis);
}

void	swap_both(t_stack *stack, char *printdis)
{
	int	tmp;
	int	temp;

	if (stack->len_a < 2 || stack->len_b < 2)
		return ;
	tmp = stack->stack_a[0];
	temp = stack->stack_b[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_a[1] = tmp;
	stack->stack_b[1] = temp;
	printdisstuff(printdis);
}
