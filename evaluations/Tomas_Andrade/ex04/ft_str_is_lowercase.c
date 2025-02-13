/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:21:30 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/29 13:29:53 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "HELLO";
    char str3[] = "";

    printf("Is str1 lowercase? %d\n", ft_str_is_lowercase(str1));
    printf("Is str2 lowercase? %d\n", ft_str_is_lowercase(str2));
    printf("Is str3 lowercase? %d\n", ft_str_is_lowercase(str3));

    return (0);
}
*/
