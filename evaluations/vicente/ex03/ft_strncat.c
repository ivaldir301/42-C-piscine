/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonhors <vbonhors@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:32:24 by vbonhors          #+#    #+#             */
/*   Updated: 2025/02/03 12:23:55 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
     char test1[50] = "Hello ";
     printf("Test 1 - Basic concatenation:\n");
     printf("Before: '%s'\n", test1);
     ft_strncat(test1, "World!", 3);
     printf("After ft_strncat: '%s'\n", test1);
     printf("Expected result: 'Hello Wor'\n\n");

     char test2[50] = "";
     printf("Test 2 - Empty destination:\n");
     printf("Before: '%s'\n", test2);
     ft_strncat(test2, "Testing", 4);
     printf("After ft_strncat: '%s'\n", test2);
     printf("Expected result: 'Test'\n\n");

     char test3[50] = "Hello ";
     printf("Test 3 - Zero characters to copy:\n");
     printf("Before: '%s'\n", test3);
     ft_strncat(test3, "World", 0);
     printf("After ft_strncat: '%s'\n", test3);
     printf("Expected result: 'Hello '\n\n");

     char test4[50] = "Hello ";
     printf("Test 4 - nb larger than source:\n");
     printf("Before: '%s'\n", test4);
     ft_strncat(test4, "Hi", 5);
     printf("After ft_strncat: '%s'\n", test4);
     printf("Expected result: 'Hello Hi'\n\n");

     char test5a[50] = "Compare ";
     char test5b[50] = "Compare ";
     printf("Test 5 - Comparison with original strncat:\n");
     printf("ft_strncat result: '%s'\n", ft_strncat(test5a, "function", 4));
     printf("Original strncat: '%s'\n", strncat(test5b, "function", 4));

     return (0);
 }
