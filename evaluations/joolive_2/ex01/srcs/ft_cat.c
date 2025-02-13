/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolive2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:24:16 by joolive2          #+#    #+#             */
/*   Updated: 2025/02/10 16:09:32 by joolive2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

#define BUFF_SIZE 16384

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_print_input(void)
{
	int		size_r;
	int		size_w;
	char	buff[BUFF_SIZE];

	size_r = read(0, buff, BUFF_SIZE);
	while (size_r > 0)
	{
		size_w = write(1, buff, size_r);
		if (size_w == -1)
		{
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			write(2, "\n", 1);
			return ;
		}
		size_r = read(0, buff, BUFF_SIZE);
	}
	if (size_r == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
	}
}

void	ft_read_file(int id)
{
	char	buff[BUFF_SIZE];
	int		size_r;
	int		size_w;

	size_r = read(id, buff, BUFF_SIZE);
	while (size_r > 0)
	{
		size_w = write(1, buff, size_r);
		if (size_w == -1)
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
	}
	close(id);
}

int	main(int argc, char *argv[])
{
	int	id;
	int	i;

	if (argc < 2)
		ft_print_input();
	i = 1;
	while (i < argc)
	{
		if (*argv[i] == '-')
			ft_print_input();
		else
		{
			id = open(argv[i], O_RDONLY);
			if (id == -1)
			{
				write(2, strerror(errno), ft_strlen(strerror(errno)));
				write(2, "\n", 1);
				return (1);
			}
			ft_read_file(id);
		}
		i++;
	}
	return (0);
}
