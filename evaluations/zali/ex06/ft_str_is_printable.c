/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:09:00 by zali              #+#    #+#             */
/*   Updated: 2025/01/26 15:28:41 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	result;
	int	ascii;

	result = 1;
	while (*str != '\0')
	{
		ascii = *str;
		if (!(ascii >= 32 && ascii <= 126))
		{
			result = 0;
			break ;
		}
		str++;
	}
	return (result);
}

#include <stdio.h>

int main()
{
 	char str[] = "!@#!()!@*#(!@#P(!@#))";
 	printf("%i", ft_str_is_printable(str));
}
