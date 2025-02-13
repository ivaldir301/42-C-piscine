/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelendo <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:30:20 by gmelendo          #+#    #+#             */
/*   Updated: 2025/02/02 20:44:25 by gmelendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
 	printf("%d\n", ft_str_is_printable("Hello, World!"));  
    printf("%d\n", ft_str_is_printable("\tHello"));  
    printf("%d\n", ft_str_is_printable("123@#$%^&*()"));  
    printf("%d\n", ft_str_is_printable(""));  
    printf("%d\n", ft_str_is_printable("\nNewLine"));  
    printf("%d\n", ft_str_is_printable(NULL)); 
	return (0);
} */