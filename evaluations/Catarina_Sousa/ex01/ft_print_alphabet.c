/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csousa <csousa@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:14:53 by csousa            #+#    #+#             */
/*   Updated: 2025/01/28 10:12:22 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

void	ft_print_alphabet(void)
{
	char	a;
	char	z;

	a = 97;
	z = 122;
	while (a <= z)
	{
		write(1, &a, 1);
		a++;
	}
}

int main()
{
	ft_print_alphabet();
	printf("\n");
	return(0);
}
