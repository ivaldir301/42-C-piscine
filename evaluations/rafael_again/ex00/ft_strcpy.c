/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racosta <racosta@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:40:16 by racosta           #+#    #+#             */
/*   Updated: 2025/01/29 10:33:37 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    char str[100] = "haha";
    char dest[100] = "asasasa";      
	
    printf("String antes de ser alterada: %s\n", dest);

    ft_strcpy(dest, str);

    printf("String copiada e: %s\n", dest);
    
    return 0;
}
