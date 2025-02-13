/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:45:29 by ibatalha          #+#    #+#             */
/*   Updated: 2025/01/30 13:49:48 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char str_print[] = "dsdsafsx!";
// 	char str_non_print[] = "\0\1\2\3\4\5\6\7\t\n\v\f\r\14\15";
// 	printf("the result: %d\n", ft_str_is_printable(str_non_print));
// 	return (0);
// }
