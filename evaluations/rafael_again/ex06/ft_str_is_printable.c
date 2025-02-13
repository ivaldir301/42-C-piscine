/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racosta <racosta@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:03:00 by racosta           #+#    #+#             */
/*   Updated: 2025/01/28 18:27:15 by racosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/* int main(){
    char str[100] = "\n";

    printf("Resultado: %d\n", ft_str_is_printable(str));
    
    return 0;	
} */
