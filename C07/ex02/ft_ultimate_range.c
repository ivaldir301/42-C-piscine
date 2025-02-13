/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <ibatalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:54:44 by ibatalha          #+#    #+#             */
/*   Updated: 2025/02/10 15:31:16 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_range(int **range, int *array, int max, int min)
{
	int	i;
	int	j;

	i = 0;
	j = min;
	if (array != NULL)
	{
		while (j < max)
		{
			array[i] = j;
			i++;
			j++;
		}
		*range = array;
	}
	else
		return (-1);
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	final_value;
	int	*array;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(size * sizeof(int));
	final_value = ft_range(range, array, max, min);
	return (final_value);
}
