/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:53:02 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/13 10:59:48 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	array = malloc(size * sizeof(int));
	while (i < size)
		array[i++] = min++;
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range != NULL)
		return (size);
	else
		return (-1);
}

 #include <stdio.h>

int	main(void)
{
	int	*range;
	int	**range2;
	int	i;
	int	min;
	int max;
	int	size;

	i = 0;
	min = -10;
	max = 1000000;
	range2 = &range;
	size = ft_ultimate_range(range2, min, max);
	while (i < size)
	{
		printf("Value of array[i = %d]: %d\n", i, range[i]);
		i++;
	}
	printf("The size of ultimate range is %d\n", size);
	return (0);
}
