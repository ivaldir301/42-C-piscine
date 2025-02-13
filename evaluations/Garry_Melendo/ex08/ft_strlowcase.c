/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelendo <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:42:09 by gmelendo          #+#    #+#             */
/*   Updated: 2025/02/03 12:25:50 by gmelendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	arr[] = "ola tudo bem?";
	char	arr2[] = "OLA TUDO BEM?";
	char	arr3[] = "OLA tudo Bem?";
	char	arr4[] = "Teste 1234 teste";

	printf("%s\n", ft_strlowcase(arr));
	printf("%s\n", ft_strlowcase(arr2));
	printf("%s\n", ft_strlowcase(arr3));
	printf("%s\n", ft_strlowcase(arr4));
	return (0);
} */
