/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:02:14 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/03 15:42:33 by fde-waal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str1a;
	char	*str2a;
	char	str[] = "Where are we going today?";
	char	str1[500] = "Where are we going today?";
	char	str2[500] = "Where are we going today?";
	char	to_find[] = "are";

	str1a = strstr(str1, to_find);
	str2a = ft_strstr(str2, to_find);

	printf("String: %s\n", str);
	printf("To_find: %s\n", to_find);
	printf("Test with strstr: %s\n", str1a);
	printf("Test with ft_strstr: %s\n", str2a);
}