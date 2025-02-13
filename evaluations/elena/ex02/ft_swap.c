/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:23:25 by hesantos          #+#    #+#             */
/*   Updated: 2025/02/04 16:48:07 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int	main()
{
int x = 8, y = 6;
int *a = &x, *b = &y;
printf("Antes da troca A = %d, B = %d\n", x, y);
ft_swap(&x,&y);
printf("Depois da troca A = %d, B = %d\n",*a, *b);
return (0);
}

