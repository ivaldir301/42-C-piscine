/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarval <micarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:22:47 by micarval          #+#    #+#             */
/*   Updated: 2025/02/13 12:03:17 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str [i] == 127))
			return (0);
		i++;
	}
	return (1);
}

int	main(void){
	char *string = "2345\n";
	printf("%d", ft_str_is_printable(string));
	return (0);
}
