/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolive2 <joolive2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:31:43 by joolive2          #+#    #+#             */
/*   Updated: 2025/02/12 18:14:15 by joolive2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H

# include <string.h>
# include <errno.h>
# include <unistd.h>

typedef unsigned long long	t_ulong;

# define BUFF_SIZE 16384

int		ft_strlen(char *str);
int		ft_atoi(char *str);

#endif
