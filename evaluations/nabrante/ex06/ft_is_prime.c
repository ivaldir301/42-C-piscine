/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabrante <nabrante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:14:34 by nabrante          #+#    #+#             */
/*   Updated: 2025/02/08 11:12:53 by nabrante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

/* // Para teste
int main()
{
    printf("É primo 2? %d\n", ft_is_prime(2)); 		// 1
    printf("É primo 3? %d\n", ft_is_prime(3)); 		// 1
    printf("É primo 4? %d\n", ft_is_prime(4)); 		// 0
    printf("É primo 17? %d\n", ft_is_prime(17));	// 1
    printf("É primo 18? %d\n", ft_is_prime(18)); 	// 0
    printf("É primo 0? %d\n", ft_is_prime(0)); 		// 0
    printf("É primo -7? %d\n", ft_is_prime(-7)); 	// 0
    return 0;
} */
