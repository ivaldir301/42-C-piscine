/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostyuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:09:30 by akostyuk          #+#    #+#             */
/*   Updated: 2025/02/10 14:19:17 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*src;
	char	dest[20];
	unsigned int	len;

	src = "Hello, World!, piscine is tought";
	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Dest: %s\n", dest);
	printf("Tamanho esperado: %u\n", len);
	return (0);
}
