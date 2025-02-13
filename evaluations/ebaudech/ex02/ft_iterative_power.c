/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:11:08 by ebaudech          #+#    #+#             */
/*   Updated: 2025/02/06 12:25:11 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		j = j * nb;
		i++;
	}
	return (j);
}

int		main(void)
{
	printf("-3 ^-1 = %d\n", ft_iterative_power(-3, -1));
	printf(" 0 ^ 0 = %d\n", ft_iterative_power(0, 0));
	printf(" 0 ^ 2 = %d\n", ft_iterative_power(0, 2));
	printf(" 4 ^-1 = %d\n", ft_iterative_power(4, -1));
	printf(" 4 ^ 0 = %d\n", ft_iterative_power(4, 0));
	printf(" 4 ^ 1 = %d\n", ft_iterative_power(4, 1));
	printf(" 4 ^ 2 = %d\n", ft_iterative_power(4, 2));
	
}

