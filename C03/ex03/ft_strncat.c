/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:59:12 by ibatalha          #+#    #+#             */
/*   Updated: 2025/01/30 17:20:46 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	unsigned int	counter_aux;

	counter_aux = 0;
	counter = 0;
	while (dest[counter] != '\0')
		counter++;
	while (src[counter_aux] != '\0' && counter_aux < nb)
	{
		dest[counter] = src[counter_aux];
		counter_aux++;
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char str1[100] = "Escola 42 Lisboa.";
// 	char str2[100] = "Sou estudante na \0";

// 	ft_strncat(str2, str1, 5);
// 	printf("the resulting string: %s\n", str2);
// 	return (0);
// }
