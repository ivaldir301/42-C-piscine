/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <ibatalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:05:09 by miakubov          #+#    #+#             */
/*   Updated: 2025/02/08 12:23:24 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnumber(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
			ft_putnumber(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnumber(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

#include <stdio.h>
int main()
{char *str[] = {"AA", "BB", "CC", "DD", "EE"};
    
    struct s_stock_str arr[5];

    for (int i = 0; i < 5; i++) {
        arr[i].str = str[i];
        arr[i].size = 2;  
        arr[i].copy = str[i];
    }
	ft_show_tab(arr);
}

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
#include <stdio.h>
int main(){
	int counter;
	counter = 7;	
	char *str[] = {"qq", "tt", "rr", "ff", "gg", "fasd", "fds"};
	struct s_stock_str *test = ft_strs_to_tab(counter, str);
	for (int i = 0; i < counter; i++)
	{
		printf("%s ", test[i].str);
	}

}
