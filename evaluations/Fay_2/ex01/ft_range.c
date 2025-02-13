/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:47:00 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/13 08:21:58 by fde-waal         ###   ########.fr       */
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

/* #include <stdio.h>

int	main(void)
{
	int	*array;
	int	i;
	int	size;
	int	min;
	int max;

	min = 2;
	max = -2;
	array = ft_range(min, max);
	i = 0;
	size = max - min;
	while (i < size)
	{
		printf("Value of array[i = %d]: %d\n", i, array[i]);
		i++;
	}
	return (0);
} */