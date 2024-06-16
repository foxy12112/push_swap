/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:23:55 by ldick             #+#    #+#             */
/*   Updated: 2024/06/16 11:12:53 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	revrot_a(t_stack *stack, char *printdis)
{
	int	tmp;
	int	i;

	if (stack->len_a < 2)
		return ;
	tmp = stack->stack_a[stack->len_a - 1];
	i = stack->len_a - 1;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = tmp;
	printdisstuff(printdis);
}

void	revrot_b(t_stack *stack, char *printdis)
{
	int	tmp;
	int	i;

	if (stack->len_b < 2)
		return ;
	tmp = stack->stack_b[stack->len_b - 1];
	i = stack->len_b - 1;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[i] = tmp;
	printdisstuff(printdis);
}

void	revrot_both(t_stack *stack, char *printdis)
{
	int	tmp;
	int	temp;
	int	i;
	int	j;

	if (stack->len_b < 2 || stack->len_a < 2)
		return ;
	temp = stack->stack_a[stack->len_a - 1];
	tmp = stack->stack_b[stack->len_b - 1];
	i = stack->len_a - 1;
	j = stack->len_b - 1;
	while (j > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		j--;
	}
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = temp;
	stack->stack_b[i] = tmp;
	printdisstuff(printdis);
}
