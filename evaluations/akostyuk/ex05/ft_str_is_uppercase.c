/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostyuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:51:59 by akostyuk          #+#    #+#             */
/*   Updated: 2025/02/10 14:12:28 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str > 'Z' || *str < 'A')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	printf ("%i\n", ft_str_is_uppercase("LKFADSLK"));
}
