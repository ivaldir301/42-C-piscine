/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <ibatalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:52:34 by ibatalha          #+#    #+#             */
/*   Updated: 2025/02/10 18:47:53 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_copy_str(char *new_array, char *str, int pos)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		new_array[pos] = str[j];
		pos++;
		j++;
	}
	return (pos);
}

void	ft_copy_join(char *new_array, int size, char **strs, char *sep)
{
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	while (i < size)
	{
		pos = ft_copy_str(new_array, strs[i], pos);
		if (i < size - 1)
		{
			pos = ft_copy_str(new_array, sep, pos);
		}
		i++;
	}
	new_array[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_array;
	int		total;
	int		i;

	if (size <= 0)
	{
		new_array = malloc(1);
		if (new_array == 0)
			return (0);
		new_array[0] = '\0';
		return (new_array);
	}
	total = 0;
	i = 0;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		i++;
	}
	total = total + ft_strlen(sep) * (size - 1);
	new_array = malloc(total + 1);
	if (new_array == 0)
		return (0);
	ft_copy_join(new_array, size, strs, sep);
	return (new_array);
}
