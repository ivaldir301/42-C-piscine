/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarceli <mmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:20:33 by mmarceli          #+#    #+#             */
/*   Updated: 2025/02/03 17:36:06 by mmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main() {
	char	str[100] = "bagulho ta serio";
	char	dest[100] = "aqui estou mais um dia";
	
	printf("String antes de ser alterada: %s\n", dest);

	ft_strcpy(dest, str);

	printf("String copiada e: %s\n", dest);

	return 0;
}