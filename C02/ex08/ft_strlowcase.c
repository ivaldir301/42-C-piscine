/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:00:18 by ibatalha          #+#    #+#             */
/*   Updated: 2025/01/30 13:52:29 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
			str[counter] += 32;
		counter++;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "IVALDIR";	
// 	ft_strlowcase(str);
// 	printf("the result: %s\n", str);
// 	return (0);
// }
