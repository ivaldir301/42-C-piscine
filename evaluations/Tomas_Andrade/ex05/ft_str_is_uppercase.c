/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:32:42 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/29 13:25:56 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>

int main()
{
    char str1[] = "HELLO";
    char str2[] = "hello";
    char str3[] = "";

    printf("str1 is uppercase? %d\n", ft_str_is_uppercase(str1));
    printf("str2 is uppercase? %d\n", ft_str_is_uppercase(str2));
    printf("str3 is uppercase? %d\n", ft_str_is_uppercase(str3));

    return (0);
}
*/
