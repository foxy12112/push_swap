/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:33:36 by ldick             #+#    #+#             */
/*   Updated: 2024/06/06 13:39:32 by ldick            ###   ########.fr       */
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
	{
		return (NULL);
	}
	str[0] = '\0';
	i = 0;
	while (++i < argc)
	{
		ft_strlcat(str, argv[i], length + 1);
		if (i < argc - 1)
		{
			ft_strlcat(str, " ", length + 1);
		}
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
	arr = malloc((argc - 1) * sizeof(int *));
	string = make_line(argc, argv);
	strong = ft_split(string, ' ');
	while (i < argc - 1)
	{
		arr[i] = malloc(sizeof(int));
		*arr[i] = ft_atoi(strong[i]);
		i++;
	}
	return (arr);
}

int	full_check(int argc, char *argv[])
{
	t_stack	stack;
	int		i;
	char	*str;
	int		result;

	i = 0;
	str = make_line(argc, argv);
	stack.stack_a = make_double(argc, argv);
	if (ft_is_number(str))
		return (0);
	result = ft_dup_check(stack.stack_a, argc - 1);
	if (result)
	{
		ft_printf("error");
		return (1);
	}
	while (i < argc - 1)
	{
		printf("%d\n", *stack.stack_a[i++]);
	}
	return (0);
}
