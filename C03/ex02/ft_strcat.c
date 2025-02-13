/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:40:14 by ibatalha          #+#    #+#             */
/*   Updated: 2025/01/30 16:56:27 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	counter_aux;

	counter = 0;
	counter_aux = 0;
	while (dest[counter] != '\0')
		counter++;
	while (src[counter_aux] != '\0')
	{
		dest[counter] = src[counter_aux];
		counter++;
		counter_aux++;
	}
	dest[counter] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char str1[] = "Santos Lopes Batalha";
// 	char str2[] = "Ivaldir ";

// 	ft_strcat(str2, str1);
// 	printf("the resulting string: %s\n", str2);
// 	return (0);
// }
