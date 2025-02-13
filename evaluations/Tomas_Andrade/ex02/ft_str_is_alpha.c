/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:54:12 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/29 13:28:36 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>

int main(void)
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("Is str1 alpha? %d\n", ft_str_is_alpha(str1));
    printf("Is str2 alpha? %d\n", ft_str_is_alpha(str2));
    printf("Is str3 alpha? %d\n", ft_str_is_alpha(str3));
}
*/
