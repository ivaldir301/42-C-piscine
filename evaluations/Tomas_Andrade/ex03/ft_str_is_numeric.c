/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:42:11 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/29 13:29:14 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "1234567890";
	char	str2[] = "1234abcd";
	char	str3[] = "";

	printf("Is str1 numeric: %d\n", ft_str_is_numeric(str1));
	printf("Is str2 numeric: %d\n", ft_str_is_numeric(str2));
	printf("Is str3 numeric: %d\n", ft_str_is_numeric(str3));
}
*/
