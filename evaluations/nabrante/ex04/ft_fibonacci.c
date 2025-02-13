/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabrante <nabrante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:55:29 by nabrante          #+#    #+#             */
/*   Updated: 2025/02/08 11:12:27 by nabrante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int ft_fibonacci(int index);

// Para teste
int main()
{
    printf("Fibonacci(0) = %d\n", ft_fibonacci(0)); 	// 0
    printf("Fibonacci(1) = %d\n", ft_fibonacci(1)); 	// 1
    printf("Fibonacci(2) = %d\n", ft_fibonacci(2)); 	// 1
    printf("Fibonacci(3) = %d\n", ft_fibonacci(3)); 	// 2
    printf("Fibonacci(10) = %d\n", ft_fibonacci(10)); 	// 55
    printf("Fibonacci(-5) = %d\n", ft_fibonacci(-5)); 	// -1
    return 0;
} */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
