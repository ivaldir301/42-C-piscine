/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apack <apack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:20:38 by apack             #+#    #+#             */
/*   Updated: 2025/02/04 12:34:59 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

 int	main(void)
{
	char	str[] = "\n";
	printf("Return: %d\n", ft_str_is_printable(str));
	return 0;
} 
