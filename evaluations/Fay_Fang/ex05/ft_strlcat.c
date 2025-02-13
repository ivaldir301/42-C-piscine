/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:53:55 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/03 15:47:03 by fde-waal         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	des;
	unsigned int	srs;
	unsigned int	tos;

	i = 0;
	tos = 0;
	des = ft_strlen(dest);
	srs = ft_strlen(src);
	if (size > des)
		tos = des + srs;
	else
		tos = srs + size;
	while (src[i] && size > (des + 1))
	{
		dest[des] = src[i];
		des++;
		i++;
	}
	dest[des] = '\0';
	return (tos);
}

	#include <string.h>
	#include <stdio.h>

	int	main(void)
	{
		int	nb;
		int	s1;
		int	s2;
		char	src[] = " bellyboo";
		char	dest[] = "Fay fang";
		char	dest1[500] = "Fay Fang";
		char	dest2[500] = "Fay Fang";

		nb = 11;
		s1 = strlcat(dest1, src, nb);
		s2 = ft_strlcat(dest2, src, nb);

		printf("Source: %s\n", src);
		printf("Destination: %s\n", dest);
		printf("Test with strlcat: %s, size = %d\n", dest1, s1);
		printf("Test with ft_strlcat: %s, size = %d\n", dest2, s2);
	}