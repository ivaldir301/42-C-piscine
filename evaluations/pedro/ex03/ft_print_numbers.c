/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedcaste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:40:45 by pedcaste          #+#    #+#             */
/*   Updated: 2025/01/25 17:06:47 by pedcaste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;
	c = '0';
	while (c <= '9')
	{
		write (1, &c, 1);
		c++;
	}	
}

/*int	main(void)
{
	ft_print_numbers();
	return 0;
}*/

