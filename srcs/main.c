/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 07:31:59 by ldick             #+#    #+#             */
/*   Updated: 2024/05/25 06:12:52 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	int		o;
	int		i;
	int		k;
	char	**milk;

	milk = NULL;
	k = 1;
	o = 0;
	i = 0;
	while (i < argc)
	{
		o += ft_wordcount(argv[k], ' ');
		k++;
		i++;
	}
	i = 0;
	k = 0;
	while (i < argc)
	{
		milk = ft_split(&argv[k][i], ' ');
		if (!argv && i + 1 < argc)
			k++;
		i++;
	}
	k = 0;
	i = 0;
	while (k < o)
	{
		printf("%c", milk[i][k]);
		if (milk[i + 1] == (void *)0)
		{
			k++;
			i = 0;
			printf("\n");
		}
		i++;
	}
	return (0);
}
