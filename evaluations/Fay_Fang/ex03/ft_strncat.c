/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:57:43 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/03 15:22:43 by fde-waal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	int	nb;
	char	src[] = "Flamingo birds idk";
	char	dest[] = "Fay ";
	char	dest1[100] = "Fay ";
	char	dest2[100] = "Fay ";

	nb = 20;
	strncat(dest1, src, nb);
	ft_strncat(dest2, src, nb);

	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Test with strncat: %s\n", dest1);
	printf("Test with ft_strncat: %s\n", dest2);
}