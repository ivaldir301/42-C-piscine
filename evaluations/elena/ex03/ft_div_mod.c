/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:26:15 by hesantos          #+#    #+#             */
/*   Updated: 2025/02/04 16:48:47 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int a = 7, b = 4;
	int div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf("Divisao entre %d e %d = %d \n", a, b, div);
	printf("O resto da divisao entre %d e %d = %d \n", a, b, mod);
	}

