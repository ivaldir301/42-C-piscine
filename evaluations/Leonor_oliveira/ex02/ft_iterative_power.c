/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:41:13 by leonoliv          #+#    #+#             */
/*   Updated: 2025/02/11 19:05:06 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	count;

	result = 1;
	count = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (count < power)
	{
		result = result * nb;
		count ++;
	}
	return (result);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_power(4, 2));
}
