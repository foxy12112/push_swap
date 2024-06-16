/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 07:31:59 by ldick             #+#    #+#             */
/*   Updated: 2024/06/16 13:32:45 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main_sort(t_stack *stack)
{
	if (stack->len_a == 2)
		swap_a(stack, "sa");
	else if (stack->len_a == 3)
		sort_three(stack);
	else if (stack->len_a <= 5)
		sort_five(stack);
	else
		ft_sort(stack);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_stack	stack;
	int		i;

	if (argc < 2)
		return (1);
	i = 0;
	stack.errornum = full_check(argc, argv, &stack);
	stack.stack_b = malloc(sizeof(int) * stack.len_a);
	stack.len_b = 0;
	if (ft_is_sorted(stack.stack_a, stack.len_a))
		return (free(stack.stack_a), 0);
	main_sort(&stack);
	// while (i < stack.len_a)
	// {
	// 	if (stack.stack_a[i] < MIN_INT || stack.stack_a[i] > MAX_INT)
	// 		return (1);
	// 	if (i < stack.len_b)
	// 		ft_printf("%d--%d\n", stack.stack_a[i], stack.stack_b[i]);
	// 	else
	// 		ft_printf("%d--nuthin in stack_b\n", stack.stack_a[i]);
	// 	i++;
	// }
	return (0);
}
