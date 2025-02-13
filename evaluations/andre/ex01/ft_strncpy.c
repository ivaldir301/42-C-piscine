/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apack <apack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:02:28 by apack             #+#    #+#             */
/*   Updated: 2025/02/04 12:32:48 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*src && n)
	{
		*(dest + i++) = *src++;
		n--;
	}
	if (n--)
	{
		*(dest + i++) = '\0';
		i++;
	}
	return (dest);
}

 int	main(void)
{
	char src[] = "Escola 42";
	char dest[20];

	ft_strncpy(dest, src, 15);
	printf ("Dest, 15 char: %s\n", dest);

	return (0);
}
