/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabrante <nabrante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:35:11 by nabrante          #+#    #+#             */
/*   Updated: 2025/02/08 11:12:43 by nabrante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

// Para teste
int main() {
    printf("Raiz quadrada de 16: %d\n", ft_sqrt(16)); // 4
    printf("Raiz quadrada de 25: %d\n", ft_sqrt(25)); // 5
    printf("Raiz quadrada de 10: %d\n", ft_sqrt(10)); // 0
    printf("Raiz quadrada de -4: %d\n", ft_sqrt(-4)); // 0
    printf("Raiz quadrada de 2147395600: %d\n", ft_sqrt(2147395600));
	//46340 (max int 2147483647)
    return 0;
}
 */
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
