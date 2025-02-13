/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:31:29 by arpereir          #+#    #+#             */
/*   Updated: 2025/02/03 18:28:13 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	result = 1;
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}


#include <stdio.h>
int	main(void)
{
	int n = 5;

	printf("%i\n", ft_iterative_factorial(n));

	return (0);
}

