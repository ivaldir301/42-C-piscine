/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto <rneto@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-05 08:06:24 by rneto             #+#    #+#             */
/*   Updated: 2025/02/08 11:57:55 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == 0)
			return (str + i);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char find[] = "meia ";
	char str[] = "era meia noite e cantava o cuquinho";
	char *result;
	
	result = ft_strstr(str,find);
	
	if (result)
	{
		printf("original str: < %s >\n", str);
		printf("str, after find: < %s >\n", result);
	}
	else
	{
		printf(" < %s > was not found in str\n", find);
		printf("str : < %s >\n", str);
	}
	return(0);
}
