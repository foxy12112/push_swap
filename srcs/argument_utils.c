/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:33:36 by ldick             #+#    #+#             */
/*   Updated: 2024/06/08 17:11:18 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	len_of_args(int argc, char *argv[])
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (++i < argc)
		total_len += ft_strlen(argv[i]);
	total_len += argc - 2;
	ft_printf("--%d--\n\n", total_len); //TODO delte later
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

int	**make_double(int argc, char *argv[])
{
	char	*string;
	int		i;
	char	**strong;
	int		**arr;

	i = 0;
	string = make_line(argc, argv);
	if (!string)
		return (NULL);
	arr = malloc((ft_wordcount(string, ' ')) * sizeof(int *));
	if (!arr)
		return (NULL);
	strong = ft_split(string, ' ');
	while (i++ < argc - 1)
	{
		arr[i] = malloc(sizeof(int));
		if (!arr)
			return (NULL);
		*arr[i] = ft_atoi(strong[i]);
	}
	return (arr);
}

int	full_check(int argc, char *argv[], t_stack *stack)
{
	int		i;
	char	*str;

	i = 0;
	str = make_line(argc, argv);
	if (!str)
		return (1);
	if (argc > 2)
		stack->stack_a = make_double(argc, argv);
	else if (argc == 2)
		stack->stack_a = make_double(argc, &str);
	if (ft_is_number(str) || ft_check_zero(str) || !stack->stack_a)
		return (1);
	if (ft_dup_check(stack->stack_a, argc - 1))
		return (1);
	while (i++ < ft_wordcount(str, ' '))
	{
		if (*stack->stack_a[i] < MIN_INT || *stack->stack_a[i] > MAX_INT)
			return (1);
		ft_printf("%d\n", *stack->stack_a[i]);
		i++;
	}
	return (0);
}