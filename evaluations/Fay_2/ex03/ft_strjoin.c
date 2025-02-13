/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:10:35 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/13 11:03:48 by ibatalha         ###   ########.fr       */
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

int	ft_strslen(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (size == 0)
		len = 0;
	else
	{
		while (i < size)
			len += ft_strlen(strs[i++]);
		len += ft_strlen(sep) * (size - 1);
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int		i;
	int		len;

	i = 0;
	len = ft_strslen(size, strs, sep);
	array = malloc(len * sizeof(char) + 1);
	if (array == NULL)
		return (0);
	else
	{
		while (i < size)
		{
			ft_strcat(array, strs[i]);
			if (i < size - 1)
				ft_strcat(array, sep);
			i++;
		}
		array[len] = '\0';
		return (array);
	}
}

 #include <stdio.h>

int	main(void)
{
	char	*strs[] = {"apple", "banana", "pear"};
	char	*sep = "  separator  ";
	char	*strjoin;

	strjoin = ft_strjoin(3, strs, sep);

	printf("Print the string with strjoin: %s\n", strjoin);
} 
