/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto <rneto@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-04 18:31:23 by rneto             #+#    #+#             */
/*   Updated: 2025/02/08 11:49:03 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	int				i;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	j = 0;
	while (j < nb && src[j] != 0)
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char *src;
	src = "ola menino";
	char dest[50] = "estas a dizer o que?";
	printf("before copy: src = %s\n", src);
	printf("before copy: dest = %s\n", dest);
	ft_strncat(dest, src, 0);
	printf("after copy: dest = %s\n", dest);
	return(0);
}
