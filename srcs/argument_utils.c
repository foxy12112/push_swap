/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:33:36 by ldick             #+#    #+#             */
/*   Updated: 2024/06/02 14:05:06 by ldick            ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	char	**milk;
	int		**milkmilk;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	milk = ft_split(make_line(argc, argv), ' ');
	milkmilk = NULL;
	while (i < (size_t)argc - 1)
	{
		while (j < ft_strlen(milk[i]))
		{
			milkmilk[i][1] = ft_atoi(milk[i]);
			j++;
		}
		j = 0;
		i++;
	}
	i = 0;
	while (i++ < (size_t)argc - 1)
	{
		printf("\n");
		printf("%d", milkmilk[i][1]);
	}
	free(milkmilk);
	return (0);
}
