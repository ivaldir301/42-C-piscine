/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarval <micarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:05:33 by micarval          #+#    #+#             */
/*   Updated: 2025/02/13 12:00:29 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h> 

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
 int main ()
{
	char *string = "2kldsjf345";
	printf("%d", ft_str_is_numeric(string));
	return (0);
}
