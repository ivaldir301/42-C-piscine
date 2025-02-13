/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:45:29 by zali              #+#    #+#             */
/*   Updated: 2025/01/25 19:14:23 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str += 32;
		}
		str++;
	}
	return (start);
}

// #include <stdio.h>

// int main()
// {
// 	char name[] = "Z1A2Z23ASDASDASDHI";
// 	char *n = ft_strlowcase(name);
// 	printf("%s\n", n);
// 	printf("%p\n", n);
// 	printf("%p", name);
// }