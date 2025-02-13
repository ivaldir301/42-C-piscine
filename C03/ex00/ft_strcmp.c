/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:10:48 by ibatalha          #+#    #+#             */
/*   Updated: 2025/01/30 14:40:39 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (((unsigned char)*s1 - (unsigned char)*s2));
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s1[] = "ivaldirrr";
// 	char s2[] = "ivaldir";
// 	int	result = ft_strcmp(s1, s2);

// 	printf("the result: %d\n", result);
// 	return (0);
// }
