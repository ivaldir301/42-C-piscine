/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarceli <mmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:40:16 by mmarceli          #+#    #+#             */
/*   Updated: 2025/02/04 10:19:02 by mmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int main(){
	char str[100] = "macacos me mordam";
	char strr[100] = "MaCaCoS ME MOrDaM";
	ft_strupcase(str);
	printf("Resultado: %s\n", str);
	ft_strupcase(strr);
	printf("Resultado: %s\n", strr);
	return (0);
}