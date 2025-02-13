/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudoming <sudoming@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:53:38 by sudoming          #+#    #+#             */
/*   Updated: 2025/01/26 15:05:39 by sudoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a ++;
	}
}
/*int	main(void)
{
	ft_print_alphabet();
	write (1, "\n", 1);
	return (0);
}*/
