/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:30:50 by ldick             #+#    #+#             */
/*   Updated: 2024/06/16 11:13:04 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate_a(t_stack *stack, char *printdis)
{
	int	tmp;
	int	i;

	if (stack->len_a < 2)
		return ;
	tmp = stack->stack_a[0];
	i = 0;
	while (i < stack->len_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = tmp;
	printdisstuff(printdis);
}

void	rotate_b(t_stack *stack, char *printdis)
{
	int	tmp;
	int	i;

	if (stack->len_b < 2)
		return ;
	tmp = stack->stack_b[0];
	i = 0;
	while (i < stack->len_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[i] = tmp;
	printdisstuff(printdis);
}

void	rotate_both(t_stack *stack, char *printdis)
{
	int	tmp;
	int	temp;
	int	i;

	if (stack->len_b < 2 || stack->len_a < 2)
		return ;
	tmp = stack->stack_a[0];
	temp = stack->stack_b[0];
	i = 0;
	while (i < stack->len_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[i] = temp;
	i = 0;
	while (i < stack->len_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = tmp;
	printdisstuff(printdis);
}
