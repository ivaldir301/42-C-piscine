/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 23:23:27 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/27 00:34:02 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);
void	swap(int *a, int *b);

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
/* int	main()
{
	int	i = 0;
	int	tab[5] = {13, 23, 321, 12, 17};
	int	size = 5;
	printf("Sorted array:\n");
	ft_sort_int_tab(tab, size);
	while(i <= size - 1)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
} */