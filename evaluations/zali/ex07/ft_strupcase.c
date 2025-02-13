/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:12:35 by zali              #+#    #+#             */
/*   Updated: 2025/01/26 15:29:17 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
	}
	return (start);
}
#include <stdio.h>
 
int main()
{
 	char name[] = "z1a2z23asdasdHI";
 	char *n = ft_strupcase(name);
 	printf("%s\n", n);
 	printf("%p\n", n);
 	printf("%p", name);
}
