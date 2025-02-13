/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 04:03:55 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/27 11:41:26 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *d;
	*a = c / d;
	*b = c % d;
}

int	main(void)
{
	int a = 10, b = 7;

	ft_ultimate_div_mod(&a, &b);
	
	printf("Divisão: %d, Mod: %d\n:", a, b);
	return 0;
}

