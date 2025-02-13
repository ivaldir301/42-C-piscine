/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racosta <racosta@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:52:42 by racosta           #+#    #+#             */
/*   Updated: 2025/01/28 18:39:40 by racosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  #include <stdio.h>  */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
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

/*  int main()
{
 char str[100] = "asasas";

    printf("Resultado: %d\n", ft_str_is_alpha(str));
    
    return 0;	
}    */