/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabrante <nabrante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:08:07 by nabrante          #+#    #+#             */
/*   Updated: 2025/02/08 11:12:10 by nabrante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

// Para teste:
int main()
{
    printf("2^3 = %d\n", ft_recursive_power(2, 3)); 	// 8
    printf("5^0 = %d\n", ft_recursive_power(5, 0)); 	// 1
    printf("0^0 = %d\n", ft_recursive_power(0, 0)); 	// 1
    printf("3^-2 = %d\n", ft_recursive_power(3, -2)); 	// 0
    printf("0^5 = %d\n", ft_recursive_power(0, 5)); 	// 0
    return 0;
} */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
