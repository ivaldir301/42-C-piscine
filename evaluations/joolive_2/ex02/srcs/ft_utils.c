/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolive2 <joolive2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:49:59 by joolive2          #+#    #+#             */
/*   Updated: 2025/02/11 16:19:16 by joolive2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_is_space(char c)
{
	char	*spaces;

	spaces = " \n\t\v\f\r";
	while (*spaces != '\0')
	{
		if (c == *spaces)
			return (1);
		spaces++;
	}
	return (0);
}

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

int	ft_multiplier(char *str)
{
	char	*codes;
	int		i;

	codes = "KMGTPEZY";
	i = 0;
	if (str[1] == '\0' || (str[1] == 'i' && str[2] == 'B'))
	{
		if (str[0] == 'b')
			return (512);
		while (codes[i] != '\0')
		{
			if (str[0] == codes[i++])
				return (ft_iterative_power(1024, i));
		}
	}
	if (str[1] == 'B')
	{
		while (codes[i] != '\0')
		{
			if ((str[0] == 'k' && i == 0) || str[0] == codes[i++])
				return (ft_iterative_power(1000, i));
		}
	}
	return (1);
}

unsigned long long	ft_atoi(char *str)
{
	unsigned long long	res;
	int					multiplier;

	res = 0;
	multiplier = 1;
	while (ft_is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	if (*str != '\0')
		multiplier = ft_multiplier(str);
	return (res * multiplier);
}
