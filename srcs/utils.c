/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:44:01 by ldick             #+#    #+#             */
/*   Updated: 2024/06/16 12:20:11 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lower_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	return (ft_lower_sqrt_search(nb, 0, nb));
}

int	ft_lower_sqrt_search(int b, int low, int high)
{
	int	mid;

	if (low == high)
		return (low);
	mid = (low + high) / 2;
	if (mid * mid >= b)
		return (ft_lower_sqrt_search(b, low, mid));
	return (ft_lower_sqrt_search(b, mid + 1, high));
}
