/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:28:40 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/13 10:55:56 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;

	size = ft_strlen(src);
	dest = malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*src1;
	char	*dest1;
	char	*src2;
	char	*dest2;
	int		len1;
	int		len2;
	
	src1 = "42 school";
	src2 = "42 school";
	dest1 = ft_strdup(src1);
	dest2 = strdup(src2);
	len1 = ft_strlen(dest1);
	len2 = ft_strlen(dest2);
	printf("Result using ft_strdup: %s\n", dest1);
	printf("Len using ft_strdup: %d\n", len1);
	printf("Result using strdup: %s\n", dest2);
	printf("Len using strdup: %d\n", len2);
	return (0);
}
