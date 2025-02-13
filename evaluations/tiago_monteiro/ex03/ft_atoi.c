/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiamonte <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:42:03 by tiamonte          #+#    #+#             */
/*   Updated: 2025/02/06 10:33:53 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\f' || *str == '\v')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

int	main(void)
{
	char	*str1 = "---+--+1234ab567";
	char	*str2 = "+123abc";
	char	*str3 = "      --493236768gnd";
	printf ("String: \"%s\", Atoi: %d\n", str1, ft_atoi(str1));
	printf ("String: \"%s\", Atoi: %d\n", str2, ft_atoi(str2));
	printf ("String: \"%s\", Atoi: %d\n", str3, ft_atoi(str3));
}

