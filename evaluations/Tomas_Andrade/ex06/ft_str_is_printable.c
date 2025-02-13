/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:02:09 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/29 13:30:37 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "\tH";
    char str3[] = "";

    printf("str1 is printable? %d\n", ft_str_is_printable(str1));
    printf("str2 is printable? %d\n", ft_str_is_printable(str2));
    printf("str3 is printable? %d\n", ft_str_is_printable(str3));

    return (0);
}
*/
