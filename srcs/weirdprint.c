/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weirdprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:36:13 by ldick             #+#    #+#             */
/*   Updated: 2024/07/01 16:10:55 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	printdisstuff(char *printdis)
{
	if (ft_strcmp(printdis, "x"))
		ft_printf("%s\n", printdis);
	return ;
}

void	freeall(t_stack *stack)
{
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack->stack_input);
}
