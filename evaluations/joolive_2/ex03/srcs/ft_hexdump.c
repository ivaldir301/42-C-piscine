/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolive2 <joolive2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:54:20 by joolive2          #+#    #+#             */
/*   Updated: 2025/02/12 21:27:28 by joolive2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_print_line(t_ulong offset, unsigned char *buff, int size_r)
{
	ft_putnbr_hex(offset);
	write(1, "  ", 2);
	ft_print_hex(buff, size_r);
	write(1, "|", 1);
	ft_print_content(buff, size_r);
	write(1, "|\n", 2);
}

int	ft_hexdump(int id)
{
	unsigned char	buff[BUFF_SIZE];
	int				size_r;
	t_ulong			offset;

	offset = 0;
	size_r = read(id, buff, BUFF_SIZE);
	while (size_r > 0)
	{
		ft_print_line(offset, buff, size_r);
		offset += (t_ulong) size_r;
		size_r = read(id, buff, BUFF_SIZE);
	}
	if (offset != 0)
	{
		ft_putnbr_hex(offset);
		write(1, "\n", 1);
	}
	if (size_r == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
		return (1);
	}
	return (0);
}

void	ft_read_input(void)
{
	int				size_r;
	unsigned char	buff[BUFF_SIZE];

	size_r = read(0, buff, BUFF_SIZE);
	while (size_r > 0)
		size_r = read(0, buff, BUFF_SIZE);
	if (size_r == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
	}
}

int	main(int argc, char *argv[])
{
	int	id;

	if (argc < 3 || (argv[1][0] == '-' && argv[1][1] != 'C'))
	{
		ft_read_input();
		return (0);
	}
	id = open(argv[2], O_RDONLY);
	if (id == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
		return (1);
	}
	if (ft_hexdump(id))
	{
		close(id);
		return (1);
	}
	close(id);
	return (0);
}
