/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <ibatalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:03:37 by ibatalha          #+#    #+#             */
/*   Updated: 2025/02/11 11:37:19 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*new_pointer;
	int	size;
	int	i;
	int	j;

	j = 0;
	i = min;
	if (min >= max)
		return (NULL);
	size = max - min;
	new_pointer = malloc(size * sizeof(int));
	if (!new_pointer)
		return (NULL);
	while (j < size)
	{
		new_pointer[j] = i;
		i++;
		j++;
	}
	return (new_pointer);
}

/* #include <stdio.h>
int	main(void)
{
	int	*array;
	int	size;
	int	i;

	array = ft_range(1, 50);
	size = 50 - 1;
	i = 0;
	while (i < size)
	{
		printf("--> %d\n", array[i]);
		i++;
	}
} */
