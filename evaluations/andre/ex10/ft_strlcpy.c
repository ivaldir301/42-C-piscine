/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apack <apack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:36:31 by apack             #+#    #+#             */
/*   Updated: 2025/02/04 12:36:54 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[len] != '\0')
		len++;
	return (len);
}

 int main(void)
{
	char src[] = "hello, world!";
	char dest[13];

	unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

	printf("Source length: %u\n", len);
	printf("Destination: %s\n", dest);

	return (0);
} 
