/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:33:41 by ldick             #+#    #+#             */
/*   Updated: 2024/05/30 15:53:30 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_number(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && str[i + 1] != '\0')
		i++;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	if (str[i] != '\0' && !ft_isdigit(str[i]))
		return (1);
	return (0);
}

int	ft_dup_check(char **nbr)
{
	int	i;
	int	j;

	i = 0;
	while (nbr[i])
	{
		j = 0;
		while (nbr[j])
		{
			if (j != i && ft_strcmp(nbr[i], nbr[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_zero(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '+' || nbr[i] == '-')
		i++;
	while(nbr[i] && nbr[i] == '0')
		i++;
	if (nbr[i] != '\0')
		return (0);
	return (1);
}
