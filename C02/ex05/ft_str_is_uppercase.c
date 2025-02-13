/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:29:02 by ibatalha          #+#    #+#             */
/*   Updated: 2025/01/30 13:46:59 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
		return (1);
	while (str[counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
			is_uppercase = 1;
		else
			return (0);
		counter++;
	}
	return (is_uppercase);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "IVALDIR";
// 	printf("the result: %d\n", ft_str_is_uppercase(str));
// 	return (0);
// }
