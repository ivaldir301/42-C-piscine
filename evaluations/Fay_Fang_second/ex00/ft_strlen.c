/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:42:04 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/06 09:37:51 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char 	*str;
	int		strlen1;
	int		strlen2;

	str = "Lisbon is very expensive";
	strlen1 = strlen(str);
	strlen2 = ft_strlen(str);
	printf("The string is: %s\n", str);
	printf("The length of the string with strlen is: %d\n", strlen1);
	printf("The length of the string with ft_strlen is: %d\n", strlen2);
	return (0);
}
