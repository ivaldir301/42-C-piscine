/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosma <rcosma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:39:27 by rcosma            #+#    #+#             */
/*   Updated: 2025/02/08 18:55:40 by rcosma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ac > 1)
	{
		while (j < ac)
		{
			while (av[j][i] != '\0')
			{
				ft_putchar(av[j][i]);
				i++;
			}
			++j;
			i = 0;
			ft_putchar('\n');
		}
	}
	return (0);
}
