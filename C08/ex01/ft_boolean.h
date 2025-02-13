/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <ibatalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:10:31 by ibatalha          #+#    #+#             */
/*   Updated: 2025/02/12 17:07:15 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef int		t_bool;
#define TRUE 1
#define FALSE 0
#define SUCCESS 0 
#define EVEN(n) (n % 2 == 0)
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

void	putchar(char *str);
t_bool	ft_is_even(int nbr);
