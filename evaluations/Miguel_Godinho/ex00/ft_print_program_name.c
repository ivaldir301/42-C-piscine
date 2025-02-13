/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgodinho <mgodinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 21:12:01 by mgodinho          #+#    #+#             */
/*   Updated: 2025-02-10 21:12:01 by mgodinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* int	main(int argc, char **argv)
{
	int	i;
	int	j;


	i = 0;
	while (argc > i)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		if (i < argc - 1)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
 */
int	main(int argc, char **argv)
{
	int	i;

	if (argc > 0)
	{
		i = 0;
		while (argv[0][i])
		{
			write(1, &argv[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
