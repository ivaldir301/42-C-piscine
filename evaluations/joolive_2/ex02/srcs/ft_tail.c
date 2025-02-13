/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolive2 <joolive2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:24:16 by joolive2          #+#    #+#             */
/*   Updated: 2025/02/12 17:43:36 by joolive2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <libgen.h>
#include <stdlib.h>
#include "ft_head.h"

void	ft_process_file(char *path, int argc, t_ulong limit);

void	ft_read_input(void)
{
	int		size_r;
	char	buff[BUFF_SIZE];

	size_r = read(0, buff, BUFF_SIZE);
	while (size_r > 0)
		size_r = read(0, buff, BUFF_SIZE);
	if (size_r == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
	}
}

char	*ft_fileheader(char *str)
{
	char	*head;
	int		i;
	char	*file_name;

	head = (char *) malloc(sizeof(char) * (ft_strlen(str) + 10));
	head[0] = '=';
	head[1] = '=';
	head[2] = '>';
	head[3] = ' ';
	file_name = basename(str);
	i = 4;
	while (*file_name)
		head[i++] = *file_name++;
	head[i++] = ' ';
	head[i++] = '<';
	head[i++] = '=';
	head[i++] = '=';
	head[i++] = '\n';
	head[i] = '\0';
	return (head);
}

void	ft_print_header(char *path)
{
	char	*head;

	head = ft_fileheader(path);
	write(1, head, ft_strlen(head));
	free(head);
}

void	ft_process_args(int argc, char *argv[], int limit)
{
	int	i;

	i = 3;
	while (i < argc)
	{
		if (*argv[i] == '-')
		{
			ft_read_input();
			return ;
		}
		ft_process_file(argv[i], argc, limit);
		if (argc > 4 && i < argc - 1)
			write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_ulong	limit;

	limit = 0;
	if (argc < 3 || (argv[1][0] == '-' && argv[1][1] != 'c'))
	{
		ft_read_input();
		return (0);
	}
	limit = ft_atoi(argv[2]);
	if (limit == 0)
	{
		write(1, "tail: invalid number of bytes\n", 31);
		return (0);
	}
	ft_process_args(argc, argv, limit);
	return (0);
}
