/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 07:17:10 by ldick             #+#    #+#             */
/*   Updated: 2024/06/15 10:28:48 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MIN_INT -2147483647
# define MAX_INT 2147483647

		//includes//
# include "main-libs/libs.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

		//structs//
typedef struct s_stack
{
	int					*stack_a;
	int					*stack_b;
	int					errornum;
	int					len_a;
	int					len_b;
}	t_stack;

typedef struct s_moves
{
	char			*move;
	struct s_moves	*next;
	struct s_moves	*prev;
}	t_moves;

char	*parsing(int argc, char **argv, t_stack **stack_a);
int		ft_is_number(char *str);
int		ft_dup_check(int *nbr, int size);
int		ft_check_zero(char *nbr);
int		full_check(int argc, char *argv[], t_stack *stack);
int		ft_is_sorted(int *stack, int len);

//		operations
void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	rotate_both(t_stack *stack);
void	revrot_a(t_stack *stack);
void	revrot_b(t_stack *stack);
void	revrot_both(t_stack *stack);
void	push_a(t_stack *stack);
void	push_b(t_stack *stack);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	swap_both(t_stack *stack);


#endif