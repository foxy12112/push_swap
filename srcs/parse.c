/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 09:36:15 by ldick             #+#    #+#             */
/*   Updated: 2024/05/29 11:15:37 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*parsing(int argc, char **argv, t_stack **stack_a)
{
	char	*temp;
	char	*result;
	char	*tmp;
	int		i;
	int		j;

	while (argv[i][j] && j < argc)
	{
		temp[i] = argv[i][j];
		if (!argv[i][j])
		{
			temp[i++] = ' ';
			i++;
			j++;
		}
		i++;
	}
	return (temp);
}

void	parse_string(t_stack **stack_a, char *argv)
{
	char		**arg_list;
	t_stack		new;
	long int	num;
	int			i;

	arg_list = ft_split(argv, ' ');
	
}