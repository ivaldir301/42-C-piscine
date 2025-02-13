/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apack <apack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:33:46 by apack             #+#    #+#             */
/*   Updated: 2025/02/04 12:35:28 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 97 && str[i] <= 122 && str[i] != '\0')
	{
		str[i] -= 32;
		i++;
	}
	return (str);
}

 int	main(void)
{
	char	str[] = "absz";
	printf("Return: %s\n", ft_strupcase(str));
	return 0;
}
