/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:06:08 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/29 13:25:17 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
    char str1[] = "String";
    char str2[] = "HELLO";
    char str3[] = "hello";

    ft_strupcase(str1);
    printf("After: %s\n\n", str1);

    ft_strupcase(str2);
    printf("After: %s\n\n", str2);

    ft_strupcase(str3);
    printf("After: %s\n\n", str3);
}
*/
