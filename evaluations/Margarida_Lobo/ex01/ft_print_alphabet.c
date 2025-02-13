/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malobo <malobo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:42:26 by malobo            #+#    #+#             */
/*   Updated: 2025/01/27 16:33:21 by malobo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

/*
#include <unistd.h>
int main(void)
{
ft_print_alphabet();
}
*/
