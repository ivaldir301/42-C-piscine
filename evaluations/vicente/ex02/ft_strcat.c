/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonhors <vbonhors@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:51:59 by vbonhors          #+#    #+#             */
/*   Updated: 2025/02/03 12:21:40 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

 int main(void)
 {
     char str1[50] = "Hello ";
     printf("Test 1:\nBefore - str1: '%s'\n", str1);
     ft_strcat(str1, "World!");
     printf("After  - str1: '%s'\n\n", str1);

     char str2[50] = "";
     printf("Test 2:\nBefore - str2: '%s'\n", str2);
     ft_strcat(str2, "Testing empty dest");
     printf("After  - str2: '%s'\n\n", str2);

     char str3[50] = "Hello";
     printf("Test 3:\nBefore - str3: '%s'\n", str3);
     ft_strcat(str3, "");
     printf("After  - str3: '%s'\n\n", str3);

     char str4[50] = "One";
     printf("Test 4:\nInitial - str4: '%s'\n", str4);
     ft_strcat(str4, " Two");
     printf("First cat - str4: '%s'\n", str4);
     ft_strcat(str4, " Three");
     printf("Second cat - str4: '%s'\n\n", str4);

     return (0);
 }
