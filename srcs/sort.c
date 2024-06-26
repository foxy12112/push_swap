/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:38:16 by ldick             #+#    #+#             */
/*   Updated: 2024/06/26 14:48:30 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack *stack)
{
	int	*arr;

	arr = stack->stack_a;
	if (ft_is_sorted(stack))
		return ;
	if (arr[0] < arr[1] && arr[2] > arr[0])
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
		if (stack->stack_a[0] == 0 || (stack->stack_a[0] == 1
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

void	bubble_sort(int *array, int len)
{
	int	i;
	int	j;
	int	tmp;
	int	swapped;

	i = 0;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		j = 0;
		while (j < len - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swapped = 1;
			}
			j++;
		}
		i++;
	}
}

void	get_indices(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->len_start)
	{
		j = 0;
		while (j < stack->len_a)
		{
			if (stack->stack_input[i] == stack->stack_a[j])
			{
				stack->stack_input[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}
