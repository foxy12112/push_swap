/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:29:42 by ldick             #+#    #+#             */
/*   Updated: 2024/06/25 18:12:08 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len_a - 1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_highest_to_top(t_stack *stack)
{
	int	i;
	int	max;
	int	max_i;

	i = 0;
	max = stack->stack_b[0];
	max_i = 0;
	while (i < stack->len_b)
	{
		if (stack->stack_b[i] > max)
		{
			max = stack->stack_b[i];
			max_i = i;
		}
		i++;
	}
	if (max_i < stack->len_b / 2)
		while (stack->stack_b[0] != max)
			rotate_b(stack, "rb");
	else
		while (stack->stack_b[0] != max)
			revrot_b(stack, "rrb");
}

void	ft_sort_back(t_stack *stack)
{
	while (stack->len_b > 0)
	{
		ft_highest_to_top(stack);
		push_a(stack, "pa");
	}
}

void	sort(t_stack *stack)
{
	int	count;
	int	cmax;
	int	val;

	count = 0;
	cmax = ft_lower_sqrt(stack->len_start) * 1.3;
	while (stack->len_a > 0)
	{
		val = stack->stack_a[0];
		if (val < count)
		{
			push_b(stack, "pb");
			rotate_b(stack, "rb");
			count++;
		}
		else if (val <= cmax + count)
		{
			push_b(stack, "pb");
			count++;
		}
		else
			rotate_a(stack, "ra");
	}
	ft_sort_back(stack);
}
