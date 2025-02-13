/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:12:56 by ibatalha          #+#    #+#             */
/*   Updated: 2025/01/29 17:48:16 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = src[counter];
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "Ivaldir Santos Lopes Batalha";
// 	char str2[] = "";
// 	ft_strcpy(str2, str1);
// 	printf("value of string after: %s\n", str2);
// 	return (0);
// }
