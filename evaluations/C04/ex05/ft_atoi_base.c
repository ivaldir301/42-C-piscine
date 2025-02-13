/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulpere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:11:09 by paulpere          #+#    #+#             */
/*   Updated: 2025/02/07 20:35:26 by paulpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 255
#define REF "0123456789abcdefghijklmnopqrstuvwxyz" 

char	*convert_to_base(char *str, char *base)
{
	static char	result[MAX_LEN];
	int			str_len;
	int			i;
	char		*pos;

	str_len = strlen(str);
	if (str_len >= MAX_LEN)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		pos = strchr(base, str[i]);
		if (pos)
			result[i] = REF[pos - base];
		else
		{
			result[i] = '\0';
			return (result);
		}
		i++;
	}
	result[str_len] = '\0';
	return (result);
}

int	power(int base, int exp)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);
}

int	convert_to_base10(char *str, int base)
{
	int	result;
	int	len;
	int	counter;
	int	i;

	result = 0;
	len = strlen(str);
	counter = 0;
	i = len - 1;
	while (i >= 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			result += (str[i] - '0') * power(base, counter);
		else
			result += (str[i] - 'a' + 10) * power(base, counter);
		i--;
		counter++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	char	*converted;
	int		sign;

	sign = 1;
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	converted = convert_to_base(str, base);
	return (sign * convert_to_base10(converted, strlen(base)));
}
