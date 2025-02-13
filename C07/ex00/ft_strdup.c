/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <ibatalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:36:52 by ibatalha          #+#    #+#             */
/*   Updated: 2025/02/10 15:09:20 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_string_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		string_size;
	char	*str_new;
	int		i;

	string_size = get_string_size(src);
	str_new = malloc((string_size + 1) * sizeof(char));
	if (!str_new)
		return (NULL);
	i = 0;
	while (i < string_size)
	{
		str_new[i] = src[i];
		i++;
	}
	str_new[i] = '\0';
	return (str_new);
}

/* #include <stdio.h>
int	main(void)
{
	char str1[29] = "IvaldirSantosLopes Batalha\0";
	
	char *result = ft_strdup(str1);
	printf("the result: %p", result);
} */
