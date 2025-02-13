/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmedeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:52:23 by rmedeiro          #+#    #+#             */
/*   Updated: 2025/01/25 15:28:54 by rmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_line(int x, char first, char mid, char last)
{
	int	row;

	row = 0;
	ft_putchar(first);
	while (row < x - 2)
	{
		ft_putchar(mid);
		row++;
	}
	if (x > 1)
		ft_putchar(last);
	write (1, "\n", 1);
}

void	rush(int x, int y)
{
	int	row;

	if (x > 0 && y > 0)
	{
		write_line(x, 'o', '-', 'o');
		row = 1;
		while (row < y - 1)
		{
			write_line(x, '|', ' ', '|');
			row++;
		}
		if (y > 1)
			write_line(x, 'o', '-', 'o');
	}
	else
		write (1, "Error! Please type a postive number!", 36);
}
