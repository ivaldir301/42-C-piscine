/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:16:50 by ibatalha          #+#    #+#             */
/*   Updated: 2025/01/30 13:45:44 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
		return (1);
	while (str[counter] != '\0')
	{
		if (str[counter] >= 97 && *str <= 122)
			is_lowercase = 1;
		else
			return (0);
		counter++;
	}
	return (is_lowercase);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "ivaldir";
// 	printf("the result: %d\n", ft_str_is_lowercase(str));
// 	return (0);
// }
