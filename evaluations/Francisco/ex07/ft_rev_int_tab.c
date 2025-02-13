/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:11:10 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/26 22:29:12 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	position;

	i = 0;
	position = size - 1;
	while (i < position)
	{
		temp = tab[i];
		tab[i] = tab[position];
		tab[position] = temp;
		i++;
		position--;
	}
}

/* int	main(void)
{
	int tab[] = {1, 2, 3};
	int size = 3;
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
        printf("%d ", tab[i]);  // Print each element of the array
    printf("\n");
    return 0;
} */
