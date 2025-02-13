/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dviegas <dviegas@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:19:38 by dviegas           #+#    #+#             */
/*   Updated: 2025/01/29 17:24:10 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	my_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (my_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (my_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

#include <stdio.h>

int	main(void)
{
 	char	*str;
 	int		result;

 	str = "    ------++1234ab567";
 	result = ft_atoi(str);
 	printf("%d\n", result);
 	return (0);
}
