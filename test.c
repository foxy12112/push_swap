/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:41:07 by ldick             #+#    #+#             */
/*   Updated: 2024/05/30 17:06:48 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	len_of_args(int argc, char *argv[])
{
	int		total_len;
	int		i;
	char	*str;

	i = 1;
	total_len = 0;
	while (i < argc)
	{
		*str = argv[i];
		while (*str != '\0')
		{
			total_len++;
			str++;
		}
		i++;
	}
	return (total_len);
}

int	main(int argc, char *argv[])
{
	printf("%d\n", len_of_args(argc, argv));
	return (0);
}
