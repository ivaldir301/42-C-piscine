/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonhors <vbonhors@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:54:08 by vbonhors          #+#    #+#             */
/*   Updated: 2025/02/03 12:17:11 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

 int	main(void)
 {
 	char	*test1_s1 = "hello";
     char	*test1_s2 = "hello";
 	char	*test2_s1 = "hello";
     char	*test2_s2 = "helo";

 	printf("ft_strcmp: %d\n", ft_strcmp(test1_s1, test1_s2));
 	printf("ft_strcmp: %d\n", ft_strcmp(test2_s1, test2_s2));
 }
