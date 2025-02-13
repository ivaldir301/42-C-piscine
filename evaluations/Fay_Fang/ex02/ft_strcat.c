/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:53:46 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/03 15:36:16 by fde-waal         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
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
	char	src[] = "Fang";
	char	dest[] = "Fay test";
	char	dest1[100] = "Fay test";
	char	dest2[100] = "Fay test";
	char	*test1;
	char	*test2;

	test1 = strcat(dest1, src);
	test2 = ft_strcat(dest2, src);

	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Test with strcat: %s\n", test1);
	printf("Test with strncat: %s\n", test2);
}