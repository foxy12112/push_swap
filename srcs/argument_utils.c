/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:33:36 by ldick             #+#    #+#             */
/*   Updated: 2024/06/14 12:11:24 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	len_of_args(int argc, char *argv[])
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 1;
	while (i < argc)
	{
		total_len += ft_strlen(argv[i]);
		i++;
	}
	total_len += argc;
	return (total_len);
}

char	*make_line(int argc, char *argv[])
{
	int		length;
	char	*str;
	int		i;

	length = len_of_args(argc, argv);
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (++i < argc)
	{
		ft_strlcat(str, argv[i], length + 1);
		if (i < argc - 1)
			ft_strlcat(str, " ", length + 1);
	}
	return (str);
}

int	*make_double(int argc, char *argv[])
{
	char	*string;
	int		i;
	char	**strong;
	int		*arr;

	i = 0;
	string = make_line(argc, argv);
	if (!string)
		return (NULL);
	arr = malloc((ft_wordcount(string, ' ')) * sizeof(int));
	if (!arr)
		return (NULL);
	strong = ft_split(string, ' ');
	while (i < ft_wordcount(string, ' '))
	{
		arr[i] = ft_atoi(strong[i]);
		i++;
	}
	return (arr);
}

int	full_check(int argc, char *argv[], t_stack *stack)
{
	int		i;
	char	*str;

	i = 0;
	stack->len_a = 0;
	str = make_line(argc, argv);
	if (!str)
		return (1);
	stack->stack_a = make_double(argc, argv);
	if (ft_is_number(str) || ft_check_zero(str))
		return (1);
	if (ft_dup_check(stack->stack_a, ft_wordcount(str, ' ')))
		return (1);
	while (i < ft_wordcount(str, ' '))
	{
		i++;
		stack->len_a++;
	}
	return (0);
}

//TODO dont put anything else in this file,