/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:21:27 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/30 10:36:46 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (capitalize == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (capitalize == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			capitalize = 0;
		else
			capitalize = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
  char str[] = "hello WORLD";
  char str1[] = " mdr mdr 4242l42";
  char str2[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

  printf("%s", ft_strcapitalize(str));
  printf("\n%s", ft_strcapitalize(str1));
  printf("\n%s", ft_strcapitalize(str2));
}

