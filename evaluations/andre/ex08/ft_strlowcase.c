/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apack <apack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:07:46 by apack             #+#    #+#             */
/*   Updated: 2025/02/03 17:36:41 by apack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 65 && str[i] <= 90 && str[i] != '\0')
	{
		str[i] += 32;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "AFFASFA";
	printf("Return: %s\n", ft_strlowcase(str));
	return 0;
} */
