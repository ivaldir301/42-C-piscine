/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 06:52:22 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/06 09:55:53 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] < 32 || base[i] > 126 || base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			size;

	n = nbr;
	size = ft_strlen(base);
	if (!ft_base_valid(base))
		return ;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n < size)
		ft_putchar(base[n]);
	else
	{
		ft_putnbr_base(n / size, base);
		ft_putnbr_base(n % size, base);
	}
}

#include <stdio.h>

int	main(void)
{
	int	n = 33;
	char	*hex = "0231456789acbefd";
	char	*oct = "ponyvif";
	char	*dec = "0123456789";
	char	*bin = "01";

	ft_putnbr_base(n, dec);
	ft_putchar('\n');
	ft_putnbr_base(n, bin);
	ft_putchar('\n');
	ft_putnbr_base(n, oct);
	ft_putchar('\n');
	ft_putnbr_base(n, hex);
	return (0);
} 
