/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <ibatalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:11:34 by ibatalha          #+#    #+#             */
/*   Updated: 2025/02/12 14:34:57 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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
	char	*str_new;
	int		string_size;
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str		*stock_arr;
	int						i;

	i = 0;
	if (ac <= 0)
	{
		stock_arr = malloc(1 * sizeof(struct s_stock_str));
		stock_arr[0].str = 0;
		return (stock_arr);
	}
	stock_arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!stock_arr)
		return (NULL);
	while (i < ac)
	{
		stock_arr[i].size = get_string_size(av[i]);
		stock_arr[i].str = av[i];
		stock_arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_arr[i].str = 0;
	return (stock_arr);
}
/* #include <stdio.h>
int main(){
	int counter;
	int	i;

	i = 0;
	counter = 5;    
	char *str[] = {"Escola", "42", "Lisboa", "The", "Best"};
	struct s_stock_str *test = ft_strs_to_tab(counter, str);
	while (i < counter)
	{
			printf("%s ", test[i].str);
			i++;
	}
	return (0);
}
 */
