/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:32:42 by ibatalha          #+#    #+#             */
/*   Updated: 2025/01/30 13:51:28 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 97 && str[counter] <= 122)
			str[counter] -= 32;
		counter++;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "iValDir";
// 	ft_strupcase(str);
// 	printf("the result: %s\n", str);
// 	return (0);
// }
