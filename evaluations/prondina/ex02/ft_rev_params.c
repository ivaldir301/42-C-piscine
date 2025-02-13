/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prondina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 21:52:17 by prondina          #+#    #+#             */
/*   Updated: 2025/02/12 08:21:41 by prondina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	e;

	i = 1;
	e = argc -1;
	while (i < argc)
	{
		j = 0;
		while (argv[e][j] != '\0')
		{
			write(1, &argv[e][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		e--;
	}
	return (0);
}
