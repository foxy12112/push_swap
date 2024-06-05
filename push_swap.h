/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 07:17:10 by ldick             #+#    #+#             */
/*   Updated: 2024/06/05 15:24:18 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MIN_INT -2147483648
# define MAX_INT 2147483647

		//includes//
# include "main-libs/libs.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

		//structs//
typedef struct s_stack
{
	int					**stack_a;
	int					**stack_b;
	int					line_a;
	int					value;
	int					position;
	int					target_pos;
	int					cost_a;
	int					cost_b;
	int					index;
	struct s_stack		*next;
	struct s_stack		*prev;
}	t_stack;

char	*parsing(int argc, char **argv, t_stack **stack_a);

#endif