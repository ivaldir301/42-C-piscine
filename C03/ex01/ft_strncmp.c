/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:53:30 by ibatalha          #+#    #+#             */
/*   Updated: 2025/01/30 15:15:39 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char s1[] = "ivaldio";
// 	char s2[] = "ivaldir batalha";

// 	int	result = ft_strncmp(s1, s2, 9);
// 	printf("the result ft_strncmp: %d\n", result);
// 	printf("the result strncmp nornal: %d\n", strncmp(s1, s2, 7));
// 	return (0);
// }
