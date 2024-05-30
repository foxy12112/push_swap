/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:33:36 by ldick             #+#    #+#             */
/*   Updated: 2024/05/30 16:40:57 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	len_of_args(int argc, char *argv[])
{
	int	i;
	int	j;
	int	l;

	l = 0;
	i = 0;
	j = 0;
	while (i < argc)
	{
		if (argv[j][i] == '\0' && i < argc)
		{
			i++;
			j = 0;
		}
		j++;
		l++;
	}
}

char	make_line(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*string;

	i = 0;
	j = 0;
	while (i < argc)
	{
		
	}
}
