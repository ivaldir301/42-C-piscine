/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelendo <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:45:11 by gmelendo          #+#    #+#             */
/*   Updated: 2025/02/02 21:39:15 by gmelendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
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

	printf("%s\n", ft_strupcase(arr));
	printf("%s\n", ft_strupcase(arr2));
	printf("%s\n", ft_strupcase(arr3));
	printf("%s\n", ft_strupcase(arr4));
	return (0);
} */
