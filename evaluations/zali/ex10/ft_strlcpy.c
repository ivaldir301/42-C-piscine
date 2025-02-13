/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 07:41:40 by zali              #+#    #+#             */
/*   Updated: 2025/01/26 15:39:28 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	str_len(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	src_len;

	src_len = str_len(src);
	counter = 0;
	if (size)
	{
		while (*src && counter < size - 1)
		{
			*dest = *src;
			dest++;
			src++;
			counter++;
		}
		*dest = '\0';
	}
	return (src_len);
}

// What this functon basically does is, copies the src to dest.
// Ensures null terminator in the end and returns the size of the string.
#include <stdio.h>
int main()
{
	char name[] = "zainan";
 	char cpy[7];
 	int size = ft_strlcpy(cpy, name, 4);
 	printf("SRC: %s\n", name);
 	printf("DEST: %s\n", cpy);
 	printf("SRC SIZE: %i\n", size);
}
