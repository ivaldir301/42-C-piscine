/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:40:24 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/29 14:00:36 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	while (src[i] && n)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	if (n--)
		dest[i] = '\0';
}

int main()
{
	char a[100] = "ola";
	char b[50] = "adeus";
	int n = 4;
	printf("%s, %s, %d\n", a , b, n);
	ft_strncpy(a, b, n);
	printf("%s, %s, %d\n", a , b, n);

}

