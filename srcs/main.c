/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 07:31:59 by ldick             #+#    #+#             */
/*   Updated: 2024/06/26 15:31:35 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_strong(char **strong)
{
	int	i;

	i = 0;
	while (strong[i])
	{
		free(strong[i]);
		i++;
	}
}

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
	int		errnum;

	if (argc == 1)
		return (1);
	i = 0;
	errnum = full_check(argc, argv, &stack);
	if (errnum == 1)
	{
		ft_printf("error\n");
		return (1);
	}
	if (ft_is_sorted(&stack))
		return (0);
	stack.stack_b = malloc(sizeof(int) * stack.len_a);
	stack.len_b = 0;
	bubble_sort(stack.stack_a, stack.len_a);
	get_indices(&stack);
	ft_memcpy(stack.stack_a, stack.stack_input, sizeof(int) * stack.len_start);
	main_sort(&stack);
	freeall(&stack);
	return (0);
}
