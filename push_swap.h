/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 07:17:10 by ldick             #+#    #+#             */
/*   Updated: 2024/06/18 11:38:34 by ldick            ###   ########.fr       */
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
	int					*stack_input;
	int					errornum;
	int					len_a;
	int					len_b;
	int					len_start;
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
void	printdisstuff(char *printdis);
void	ft_highest_to_top(t_stack *stack);
int		ft_lower_sqrt_search(int b, int low, int high);
int		ft_lower_sqrt(int nb);
void	sort_three(t_stack *stack);
void	sort_five(t_stack *stack);
void	bubble_sort(int *array, int len);
void	copy_to_initstac(t_stack *stack);
void	sort(t_stack *stack);
void	get_indices(t_stack *stack);

//		operations
void	rotate_a(t_stack *stack, char *printdis);
void	rotate_b(t_stack *stack, char *printdis);
void	rotate_both(t_stack *stack, char *printdis);
void	revrot_a(t_stack *stack, char *printdis);
void	revrot_b(t_stack *stack, char *printdis);
void	revrot_both(t_stack *stack, char *printdis);
void	push_a(t_stack *stack, char *printdis);
void	push_b(t_stack *stack, char *printdis);
void	swap_a(t_stack *stack, char *printdis);
void	swap_b(t_stack *stack, char *printdis);
void	swap_both(t_stack *stack, char *printdis);


#endif