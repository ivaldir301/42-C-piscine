/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:05:09 by miakubov          #+#    #+#             */
/*   Updated: 2025/02/06 18:31:57 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		size;

	size = ft_strlen(src);
	copy = (char *) malloc((size + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;

	i = 0;
	if (ac <= 0)
		return (NULL);
	arr = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = NULL;
	return (arr);
}
/*#include <stdio.h>
int main(){
	int counter;
	counter = 5;	
	char *str[] = {"qq", "tt", "rr", "ff", "gg"};
	struct s_stock_str *test = ft_strs_to_tab(counter, str);
	for (int i = 0; i < counter; i++)
	{
		printf("%s ", test[i].str);
	}

}*/
