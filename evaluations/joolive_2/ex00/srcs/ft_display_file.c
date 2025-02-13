/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolive2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:16:36 by joolive2          #+#    #+#             */
/*   Updated: 2025/02/10 14:13:57 by joolive2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_read_file(int id)
{
	char	buff[1024];
	int		size;

	size = read(id, buff, 1024);
	while (size > 0)
	{
		write(1, buff, size);
		size = read(id, buff, 1024);
	}
	close(id);
}

int	main(int argc, char *argv[])
{
	int	id;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	id = open(argv[1], O_RDONLY);
	if (id == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	ft_read_file(id);
	return (0);
}
