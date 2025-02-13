/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarceli <mmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:20:05 by mmarceli          #+#    #+#             */
/*   Updated: 2025/02/04 10:26:05 by mmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}

int main(){
	char str[100] = "Macacos me mordam";
	char strr[100] = "MaCaCoS ME MOrDaM";
	ft_strlowcase(str);
	printf("Resultado: %s\n", str);
	ft_strlowcase(strr);
	printf("Resultado: %s\n", strr);
	return (0);
}