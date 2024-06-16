/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:38:16 by ldick             #+#    #+#             */
/*   Updated: 2024/06/16 13:12:25 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack *stack)
{
	int	*arr;

	arr = stack->stack_a;
	if (ft_is_sorted(stack->stack_a, stack->len_a))
	{
		swap_a(stack, "sa");
		rotate_a(stack, "ra");
	}
	else if (arr[0] > arr[1] && arr[2] > arr[0])
		swap_a(stack, "sa");
	else if (arr[0] < arr[1] && arr[2] < arr[0])
		revrot_a(stack, "rra");
	else if (arr[0] > arr[1] && arr[2] > arr[1])
		rotate_a(stack, "ra");
	else if (arr[0] > arr[1] && arr[2] < arr[1])
	{
		swap_a(stack, "sa");
		revrot_a(stack, "rra");
	}
}

void	sort_five(t_stack *stack)
{
	while (stack->len_a > 3)
	{
		if (stack->stack_a[0] == 0 || (stack->stack_a[1] == 1
				&& stack->len_start == 5))
			push_b(stack, "pb");
		else
			rotate_a(stack, "ra");
	}
	sort_three(stack);
	if (stack->len_start == 5 && stack->stack_b[0] < stack->stack_b[1])
		swap_b(stack, "sb");
	push_a(stack, "pa");
	push_a(stack, "pa");
}
