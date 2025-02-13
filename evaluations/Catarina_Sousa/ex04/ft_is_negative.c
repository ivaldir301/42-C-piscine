/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csousa <csousa@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:47:06 by csousa            #+#    #+#             */
/*   Updated: 2025/01/23 19:49:49 by csousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */
void	ft_is_negative(int n)
{
	if (0 <= n)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

/* int main()
{
    ft_is_negative(-3);
    printf("\n");
    return(0);
} */
