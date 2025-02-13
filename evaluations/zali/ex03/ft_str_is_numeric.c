/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 12:50:54 by zali              #+#    #+#             */
/*   Updated: 2025/01/26 15:20:01 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	result;
	int	ascii;

	result = 1;
	while (*str != '\0')
	{
		ascii = *str;
		if (!(ascii >= 48 && ascii <= 57))
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
	char name[] = "123120312flksadjflasdk38123871203";
 	int res = ft_str_is_numeric(name);
 	printf("%i", res);
}
