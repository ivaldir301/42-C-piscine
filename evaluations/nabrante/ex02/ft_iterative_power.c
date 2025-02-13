/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabrante <nabrante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:38:03 by nabrante          #+#    #+#             */
/*   Updated: 2025/02/08 11:11:56 by nabrante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* int ft_iterative_power(int nb, int power);

// Para teste:
int main()
{
    printf("2^3 = %d\n", ft_iterative_power(2, 3));		// 8
    printf("5^0 = %d\n", ft_iterative_power(5, 0)); 	// 1
    printf("0^0 = %d\n", ft_iterative_power(0, 0)); 	// 1
    printf("3^-2 = %d\n", ft_iterative_power(3, -2));	// 0
    printf("0^5 = %d\n", ft_iterative_power(0, 5)); 	// 0
    return 0;
} */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
