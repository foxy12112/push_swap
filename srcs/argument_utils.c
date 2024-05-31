/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:33:36 by ldick             #+#    #+#             */
/*   Updated: 2024/05/31 13:14:54 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	len_of_args(int argc, char *argv[])
{
	int		total_len;
	int		i;
	char	*str;

	i = 1;
	total_len = 0;
	while (i < argc)
	{
		str = argv[i];
		while (*str != '\0')
		{
			total_len++;
			str++;
		}
		i++;
	}
	return (total_len);
}

char	make_line(int argc, char *argv[])
{
	int		lenght;
	int		i;
	char	*string;

	i = 1;
	lenght = len_of_args(argc, argv);
	string = (char *)malloc(lenght + 1);
	if (!string)
		return (1);
	string[0] = '\0';
	while (i < argc)
	{
		ft_strlcat()
	}
}
