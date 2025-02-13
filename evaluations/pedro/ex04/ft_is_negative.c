/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedcaste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:07:55 by pedcaste          #+#    #+#             */
/*   Updated: 2025/01/27 19:03:11 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	num;

	if (n < '0')
	{
		num = 'N';
		write(1, &num, 1);
	}
 	if(n >= 0)	
	{
		num = 'P';
		write(1, &num, 1);
	}
}
int main(void)
{
	ft_is_negative('0');
	return 0;
}

