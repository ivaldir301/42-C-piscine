/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonhors <vbonhors@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:35:05 by vbonhors          #+#    #+#             */
/*   Updated: 2025/02/03 12:28:39 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	destlen = j;
	srclen = ft_strlen(src);
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (src [i] != '\0' && i < size - destlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destlen + srclen);
}

 int main (void)
 {
 	char src[] = "weird fishes";
     	char dest [] = "1143 1906";
     printf("%i \n", ft_strlcat(dest, src, 20));
     printf("%s \n", dest);
 }
