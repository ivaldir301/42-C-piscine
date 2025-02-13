/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelendo <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:00:46 by gmelendo          #+#    #+#             */
/*   Updated: 2025/02/03 17:09:01 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i++;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&&!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str[i - 1] >= '0' && str[i - 1] <= '9')
			&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
 
int	main(void)
{
	char	arr[] = "sa, cOM vas 42mOTS qrate-deux; ciante+et+un";
	char	arr2[] = "salut, cOMMT tas 42mOTS qute-deux; cinqet+un";
	printf("%s\n", ft_strcapitalize(arr));
	printf("%s\n", ft_strcapitalize(arr2));
	return (0);
}
