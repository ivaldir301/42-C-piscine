/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonhors <vbonhors@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:34:51 by vbonhors          #+#    #+#             */
/*   Updated: 2025/02/03 12:26:26 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

 int main(void)
 {
     char str1[] = "Hello World";
     char *result1 = ft_strstr(str1, "World");
     printf("Test 1: Find 'World' in 'Hello World'\n");
     printf("ft_strstr: %s\n", result1);
     printf("strstr:    %s\n\n", strstr(str1, "World"));

     char str2[] = "Hello World";
     char *result2 = ft_strstr(str2, "Python");
     printf("Test 2: Find 'Python' in 'Hello World'\n");
     printf("ft_strstr: %s\n", result2);
     printf("strstr:    %s\n\n", strstr(str2, "Python"));

     char str3[] = "Hello World";
     char *result3 = ft_strstr(str3, "");
     printf("Test 3: Find '' in 'Hello World'\n");
     printf("ft_strstr: %s\n", result3);
     printf("strstr:    %s\n\n", strstr(str3, ""));

     char str4[] = "hello hello hello";
     char *result4 = ft_strstr(str4, "hello");
     printf("Test 4: Find 'hello' in 'hello hello hello'\n");
     printf("ft_strstr: %s\n", result4);
     printf("strstr:    %s\n\n", strstr(str4, "hello"));

     char str5[] = "Hello World";
     char *result5 = ft_strstr(str5, "Hello");
     printf("Test 5: Find 'Hello' in 'Hello World'\n");
     printf("ft_strstr: %s\n", result5);
     printf("strstr:    %s\n\n", strstr(str5, "Hello"));

     char str6[] = "Helllo Hello";
     char *result6 = ft_strstr(str6, "Hello");
     printf("Test 6: Find 'Hello' in 'Helllo Hello'\n");
     printf("ft_strstr: %s\n", result6);
     printf("strstr:    %s\n\n", strstr(str6, "Hello"));

     char str7[] = "Hello";
     char *result7 = ft_strstr(str7, "Hello World");
    printf("Test 7: Find 'Hello World' in 'Hello'\n");
     printf("ft_strstr: %s\n", result7);
     printf("strstr:    %s\n\n", strstr(str7, "Hello World"));

     return (0);
 }
