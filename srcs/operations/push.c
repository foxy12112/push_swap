/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:33:24 by ldick             #+#    #+#             */
/*   Updated: 2024/06/16 11:15:51 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_a(t_stack *stack, char *printdis)
{
	int	tmp;
	int	tmp2;

	if (stack->len_b < 1)
		return ;
	tmp = stack->stack_b[0];
	rotate_b(stack, "x");
	stack->len_b--;
	if (stack->len_a > 0)
		tmp2 = stack->stack_a[stack->len_a - 1];
	revrot_a(stack, "x");
	stack->stack_a[0] = tmp;
	if (stack->len_a > 0)
		stack->stack_a[stack->len_a] = tmp2;
	stack->len_a++;
	printdisstuff(printdis);
}

void	push_b(t_stack *stack, char *printdis)
{
	int	tmp;
	int	tmp2;

	if (stack->len_a < 1)
		return ;
	tmp = stack->stack_a[0];
	rotate_a(stack, "x");
	stack->len_a--;
	if (stack->len_b > 0)
		tmp2 = stack->stack_b[stack->len_b - 1];
	revrot_b(stack, "x");
	stack->stack_b[0] = tmp;
	if (stack->len_b > 0)
		stack->stack_b[stack->len_b] = tmp2;
	stack->len_b++;
	printdisstuff(printdis);
}
