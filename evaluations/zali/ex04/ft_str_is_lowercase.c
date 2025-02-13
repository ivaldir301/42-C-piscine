/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 12:58:30 by zali              #+#    #+#             */
/*   Updated: 2025/01/26 15:23:17 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	result;
	int	ascii;

	result = 1;
	while (*str != '\0')
	{
		ascii = *str;
		if (!(ascii >= 97 && ascii <= 122))
		{
			result = 0;
			break ;
		}
		str++;
	}
	return (result);
}

#include <stdio.h>
void main()
{
 	char name[] = "fksladfjlsdafjfJFSLDJFA23423jl";
 	int res = ft_str_is_lowercase(name);
 	printf("%i", res);
}
