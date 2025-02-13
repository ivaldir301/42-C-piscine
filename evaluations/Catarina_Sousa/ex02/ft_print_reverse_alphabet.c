/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csousa <csousa@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:02:46 by csousa            #+#    #+#             */
/*   Updated: 2025/01/28 10:14:52 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_print_reverse_alphabet(void)
{
	char	a;
	char	z;

	a = 97;
	z = 122;
	while (z >= a)
	{
		write(1, &z, 1);
		z--;
	}
}
//void	ft_print_reverse_alphabet(void)
//{
//		write(1, "abcdfghijklmnopqrstuvwxyz", 26);
//}
 
int main()
{
	ft_print_reverse_alphabet();
	return(0);
}
