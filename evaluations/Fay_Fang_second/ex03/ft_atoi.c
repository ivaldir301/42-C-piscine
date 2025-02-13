/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 08:23:46 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/05 13:50:33 by fde-waal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_issign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	ft_sign(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	ft_num(char *str)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i ++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;
	int	atoi;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = ft_sign(str + i);
	while (ft_issign(str[i]))
		i++;
	num = ft_num(str + i);
	atoi = sign * num;
	return (atoi);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str;
	int		atoi;

	str = "  		-+---2334&ab567";
	atoi = ft_atoi(str);
	printf("The in[ut string is: %s\n", str);
	printf("The result of ft_atoi is: %d\n", atoi);
	return (0);
} */