/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racosta <racosta@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:52:42 by racosta           #+#    #+#             */
/*   Updated: 2025/01/29 10:34:26 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
 char str[100] = "hahahahahahahhahh";
    char dest[100] = "asasasa";      
    printf("String antes de ser alterada: %s\n", dest);

    ft_strncpy(dest, str, 4);

    printf("String copiada apenas com n caracteres: %s\n", dest);
    
    return 0;	
}
