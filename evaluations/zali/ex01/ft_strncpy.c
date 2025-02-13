/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:42:56 by zali              #+#    #+#             */
/*   Updated: 2025/01/26 15:15:40 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_until_n(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		counter++;
	}
	while (counter < n)
	{
		*dest = '\0';
		dest++;
		counter++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	swap_until_n(dest, src, n);
	return (dest);
}

#include <stdio.h>
int main()
{
 	char name[] = "zainan";	
 	printf("Original String: %s\n", name);	

 	char cpy[50];
 	printf("String: %s\n", cpy);	
 	printf("Address: %p\n", cpy);	
 	char *copied = ft_strncpy(cpy, name, 3);
 	printf("Copied String: %s\n", copied);	
 	printf("Copied Address: %p\n", copied);	
}
