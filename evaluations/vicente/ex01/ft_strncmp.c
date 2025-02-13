/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonhors <vbonhors@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:59:46 by vbonhors          #+#    #+#             */
/*   Updated: 2025/02/03 12:20:04 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int main(void)
{
     printf("%d\n", ft_strncmp("Hell", "Hello", 5));
 	printf("%d\n", strncmp("Hell", "Hello", 5));
     printf("%d\n", ft_strncmp("Hello", "Help", 4));
     printf("%d\n", ft_strncmp("Hello", "Help", 2));
     printf("%d\n", ft_strncmp("", "", 0));
     printf("%d\n", ft_strncmp("Hi", "Hello", 5));
     printf("%d\n", ft_strncmp("Hello", "Hello", 10));
     printf("%d\n", ft_strncmp("Zoo", "Animal", 3));

     return 0;
 }
