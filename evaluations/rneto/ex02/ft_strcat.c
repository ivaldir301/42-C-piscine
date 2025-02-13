/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto <rneto@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-04 16:41:58 by rneto             #+#    #+#             */
/*   Updated: 2025/02/08 11:46:40 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != 0)
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
	src = "";
	char dest[20] = "";
	printf("before copy: src = %s\n", src);
	printf("before copy: dest = %s\n", dest);
	ft_strcat(dest, src);
	printf("after copy: src = %s\n", src);
	printf("after copy: dest = %s\n", dest);
	return(0);
}
