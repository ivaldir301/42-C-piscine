/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:56:42 by mabarros          #+#    #+#             */
/*   Updated: 2025/01/29 22:43:50 by mabarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	p;

	p = 0;
	i = 0;
	while (*dest)
	{
		dest++;
		p++;
	}
	while (src[i] != '\0' && i < nb)
	{
		*dest = src[i];
		i++;
		dest++;
		p++;
	}
	*dest = '\0';
	dest -= p;
	return (dest);
}

/*int	main(void)
{
	char string_1[] = "Hello";
	char string_2[] = " Mundo";
	printf("%s", ft_strncat(string_1, string_2, 4));
	return (0);
}*/
