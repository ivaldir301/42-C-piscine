/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:48:49 by hesantos          #+#    #+#             */
/*   Updated: 2025/02/03 18:52:07 by hesantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int n[5] = { 8, 3, 6, -14, -44, 16, 9, 8, 0, -23};
	int size = sizeof(n) / sizeof(n[0]);
	ft_sort_int_tab(n, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d", n[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
		else
			printf("\n");
	}
}
*/
