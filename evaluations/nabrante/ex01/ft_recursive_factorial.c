/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabrante <nabrante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:37:35 by nabrante          #+#    #+#             */
/*   Updated: 2025/02/08 11:11:18 by nabrante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

// Para testar a função:
int main() {
    printf("Fatorial de 5: %d\n", ft_recursive_factorial(5)); // 120
    printf("Fatorial de 0: %d\n", ft_recursive_factorial(0)); // 1
    printf("Fatorial de -5: %d\n", ft_recursive_factorial(-5)); // 0
    return 0;
} */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
