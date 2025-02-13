/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malobo <malobo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:43:33 by malobo            #+#    #+#             */
/*   Updated: 2025/01/27 16:34:10 by malobo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c > 96)
	{
		write(1, &c, 1);
		c--;
	}
}

/*
#include <unistd.h>
int main(void)
{
    ft_print_reverse_alphabet();
}
*/
