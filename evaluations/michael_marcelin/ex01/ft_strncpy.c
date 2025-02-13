/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarceli <mmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:42:33 by mmarceli          #+#    #+#             */
/*   Updated: 2025/02/03 13:23:57 by mmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int main()
{
	char str[] = "cafe com leite";
    char dest[100] = "pastel de nata ";
    printf("String antes de ser alterada: %s\n", dest);
	
	ft_strncpy(dest, str, 4);
	strncpy(dest, str, 4);

    printf("String copiada apenas com n caracteres: %s\n", dest);
    
    return 0;
}