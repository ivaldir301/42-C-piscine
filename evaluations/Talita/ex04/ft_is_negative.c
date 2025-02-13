/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talioliv <talioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:38:57 by talioliv          #+#    #+#             */
/*   Updated: 2025/01/25 10:36:37 by talioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	x;

	if (n < 0)
	{
		x = 'N';
	}
	else
	{
		x = 'P';
	}
	write(1, &x, 1);
}
