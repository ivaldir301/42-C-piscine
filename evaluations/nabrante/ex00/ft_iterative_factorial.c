/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabrante <nabrante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:08:24 by nabrante          #+#    #+#             */
/*   Updated: 2025/02/08 11:10:55 by nabrante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int main() // main de teste:
{
    printf("Fatorial de 5: %d\n", ft_iterative_factorial(5)); // 120
    printf("Fatorial de 0: %d\n", ft_iterative_factorial(0)); // 1
    printf("Fatorial de -5: %d\n", ft_iterative_factorial(-5)); // 0
    return 0;
} */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
