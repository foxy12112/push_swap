/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 07:31:59 by ldick             #+#    #+#             */
/*   Updated: 2024/06/15 10:38:34 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stack;
	int		i;

	if (argc < 2)
		return (1);
	i = 0;
	stack.errornum = full_check(argc, argv, &stack);
	if (stack.len_a == 0)
		return (ft_putstr_fd("error\n", 2), 1);
	if (stack.errornum == 1)
		return (free(stack.stack_a), ft_putstr_fd("error\n", 2), 1);
	if (!ft_is_sorted(stack.stack_a, stack.len_a))
		return (free(stack.stack_a), 0);
	revrot_a(&stack);
	while (i < stack.len_a)
	{
		if (stack.stack_a[i] < MIN_INT || stack.stack_a[i] > MAX_INT)
			return (1);
		if (stack.len_b > 0)
			ft_printf("%d--%d\n", stack.stack_a[i], stack.stack_b[i]);
		else
			ft_printf("%d--nuthin in stack_b\n", stack.stack_a[i]);
		i++;
	}
	return (0);
}
