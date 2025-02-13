/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:40:33 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/29 14:03:17 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	char test[] = "abcdefg";
	char testnumeric[] = "";
	char numeric[] = "123 45";
	printf("%d\n", ft_str_is_numeric(test));
	printf("%d\n", ft_str_is_numeric(testnumeric));
	printf("%d\n", ft_str_is_numeric(numeric));
}

