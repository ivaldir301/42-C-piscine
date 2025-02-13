/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostyuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:29:14 by akostyuk          #+#    #+#             */
/*   Updated: 2025/02/10 14:08:49 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if ((*str > 'z' || *str < 'a') && (*str > 'Z' || *str < 'A'))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("%i\n", ft_str_is_alpha("Rubber322ducks"));
}
