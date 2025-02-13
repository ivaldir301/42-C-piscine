/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_is_numeric.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:34:45 by ibatalha          #+#    #+#             */
/*   Updated: 2025/02/01 15:22:57 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;
	int	counter;

	is_numeric = 1;
	counter = 0;
	if (str[counter] == '\0')
		return (1);
	while (str[counter] != '\0')
	{
		if (str[counter] >= 48 && str[counter] <= 57)
			is_numeric = 1;
		else
			return (0);
		counter++;
	}
	return (is_numeric);
}
// #include <stdio.h>
// int	main(void)
// {
//  	char test[] = "323ad242";
//  	printf("the result: %d\n", ft_str_is_numeric(test));
//  	return (0);
// }
