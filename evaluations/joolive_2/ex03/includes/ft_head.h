/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolive2 <joolive2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:56:35 by joolive2          #+#    #+#             */
/*   Updated: 2025/02/12 20:16:22 by joolive2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H

# include <string.h>
# include <errno.h>
# include <unistd.h>

# define BUFF_SIZE 16

typedef unsigned long	t_ulong;

void	ft_print_content(unsigned char *buff, int size_r);
void	ft_print_hex(unsigned char *buff, int size_r);
void	ft_putnbr_hex(int nbr);

#endif
