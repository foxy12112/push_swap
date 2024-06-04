/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:33:36 by ldick             #+#    #+#             */
/*   Updated: 2024/06/04 14:33:57 by ldick            ###   ########.fr       */
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
int main(int argc, char *argv[])
{
	int	i;
	int **arr;

	i = 0;
	arr = make_double(argc, argv);
	while (i++ < argc - 1)
		printf("%d\n", *arr[i]);
	return 0;
}
