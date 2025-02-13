/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:10:27 by zali              #+#    #+#             */
/*   Updated: 2025/01/26 15:05:46 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	cpy_str(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char	*ft_strcpy(char *dest, char *src)
{
	cpy_str(dest, src);
	return (dest);
}

#include <stdio.h>

int	main()
{
	char name[] = "zainan";
	char cpy[7];
	printf("Org Address: %p\n", cpy);
	printf("Org name: %s\n", cpy);

	char *copied_name = ft_strcpy(cpy, name);
	printf("Copied Address: %p\n", copied_name);
	printf("Copied name: %s\n", copied_name);
}

