/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:40:53 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/29 14:08:10 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			str[i] = str[i] + 32;
	}
	return (str);
}

int main()
{
	char a[] = "aBcDeFgHiJk";
	printf("Before :%s\n", a);
	printf("After :%s\n", ft_strlowcase(a));
}

