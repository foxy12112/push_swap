/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 07:31:59 by ldick             #+#    #+#             */
/*   Updated: 2024/06/18 12:49:06 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main_sort(t_stack *stack)
{
	if (stack->len_a == 2)
		swap_a(stack, "sa");
	else if (stack->len_a == 3)
		sort_three(stack);
	else if (stack->len_a == 5)
		sort_five(stack);
	else
		sort(stack);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_stack	stack;
	int		i;

	if (argc == 1)
		return (1);
	i = 0;
	if (full_check(argc, argv, &stack))
	{
		ft_printf("error\n");
		return (1);
	}
	stack.stack_b = malloc(sizeof(int) * stack.len_a);
	stack.len_b = 0;
	if (ft_is_sorted(stack.stack_input, stack.len_start))
		return (1);
	bubble_sort(stack.stack_a, stack.len_a);
	get_indices(&stack);
	ft_memcpy(stack.stack_a, stack.stack_input, sizeof(int) * stack.len_start);
	main_sort(&stack);
	return (0);
}
