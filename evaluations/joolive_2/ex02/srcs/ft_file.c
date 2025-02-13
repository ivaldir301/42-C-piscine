/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolive2 <joolive2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:50:27 by joolive2          #+#    #+#             */
/*   Updated: 2025/02/13 12:59:04 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"
#include <fcntl.h>

void	ft_print_header(char *path);

t_ulong	ft_file_size(int id)
{
	t_ulong	size;
	int		size_r;
	char	buff[BUFF_SIZE];

	size = 0;
	size_r = read(id, buff, BUFF_SIZE);
	while (size_r > 0)
	{
		size += (t_ulong) size_r;
		size_r = read(id, buff, BUFF_SIZE);
	}
	if (size == 0)
		write(1, "\n", 1);
	if (size_r == -1)
	{
		size = 0;
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
	}
	close (id);
	return (size);
}

void	ft_write_tail(int id)
{
	char	buff[BUFF_SIZE];
	int		size_r;

	size_r = read(id, buff, BUFF_SIZE);
	while (size_r > 0)
	{
		if (write(1, buff, size_r) == -1)
		{
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			write(2, "\n", 1);
			close(id);
			return ;
		}
		size_r = read(id, buff, BUFF_SIZE);
	}
	if (size_r == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
		close(id);
		return ;
	}
	close(id);
}

int	ft_move_pointer(int id, t_ulong limit, t_ulong size)
{
	t_ulong	offset;
	char	buff[BUFF_SIZE];
	int		size_r;

	offset = size - limit;
	while (offset > 0)
	{
		if (offset > BUFF_SIZE)
			size_r = read(id, buff, BUFF_SIZE);
		else
			size_r = read(id, buff, offset);
		if (size_r == -1)
		{
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			write(2, "\n", 1);
			close(id);
			return (1);
		}
		offset -= size_r;
	}
	return (0);
}

void	ft_read_file(int id, t_ulong limit, t_ulong size)
{
	if (size == 0)
	{
		close (id);
		return ;
	}
	if (limit >= size)
	{
		ft_write_tail(id);
		return ;
	}
	if (ft_move_pointer(id, limit, size))
		return ;
	ft_write_tail(id);
}

void	ft_process_file(char *path, int argc, t_ulong limit)
{
	int	id;
	int	id_s;

	id = open(path, O_RDONLY);
	id_s = open(path, O_RDONLY);
	if (id == -1 || id_s == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
		return ;
	}
	if (argc > 4)
		ft_print_header(path);
	ft_read_file(id, limit, ft_file_size(id_s));
}
