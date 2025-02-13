/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csousa <csousa@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:20:14 by csousa            #+#    #+#             */
/*   Updated: 2025/01/27 16:49:18 by csousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

void	ft_print_numbers(void)
{
	char	mynum;
	char	endnum;

	mynum = 48;
	endnum = 57;
	while (mynum <= endnum)
	{
		write(1, &mynum, 1);
		mynum++;
	}
}
/* 
  int main()
{
	ft_print_numbers();
	printf("\n");
	return(0);
} */
