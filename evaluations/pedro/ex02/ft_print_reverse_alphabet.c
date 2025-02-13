# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: pedcaste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 13:16:15 by pedcaste          #+#    #+#              #
/*   Updated: 2025/01/25 13:37:54 by pedcaste         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include <unistd.h>

void	ft_print_reverse_alphabet(void)	{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}
