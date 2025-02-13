/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:14:26 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/30 10:35:51 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "HELLO";


    ft_strlowcase(str1);
    printf("After: %s\n\n", str1);

    ft_strlowcase(str2);
    printf("After: %s\n\n", str2);

    ft_strlowcase(str3);
    printf("After: %s\n\n", str3);
}

