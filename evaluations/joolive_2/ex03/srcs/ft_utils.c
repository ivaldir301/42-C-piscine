/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolive2 <joolive2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:05:48 by joolive2          #+#    #+#             */
/*   Updated: 2025/02/12 21:07:55 by joolive2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int	ft_chr_is_printable(unsigned char c)
{
	if ((c < 32 && c >= 0) || c == 127)
	{
		return (0);
	}
	return (1);
}

void	ft_print_content(unsigned char *buff, int size_r)
{
	int	i;

	i = 0;
	while (i < size_r)
	{
		if (ft_chr_is_printable(buff[i]))
			write(1, &buff[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	ft_print_hex(unsigned char *buff, int size_r)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (i < BUFF_SIZE)
	{
		if (i < size_r)
		{
			write(1, &base[buff[i] / 16], 1);
			write(1, &base[buff[i] % 16], 1);
			write(1, " ", 1);
		}
		else
			write(1, "   ", 3);
		i++;
		if (i % 8 == 0)
			write(1, " ", 1);
	}
}

void	ft_reverse_stack(char *arr, int *p)
{
	int		i;

	i = *p;
	while (i > 0)
	{
		write(1, &arr[i - 1], 1);
		i--;
	}
}

void	ft_putnbr_hex(int nbr)
{
	char	arr[8];
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	if (nbr == 0)
		arr[i++] = '0';
	while (nbr > 0)
	{
		arr[i++] = base[nbr % 16];
		nbr = nbr / 16;
	}
	while (i < 8)
		arr[i++] = '0';
	ft_reverse_stack(arr, &i);
}
