/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:40:45 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/29 14:06:31 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	char teste[] = "awdasd fpajADPWiDW^^&A*W&^!&*@*&$^&";
	char a[] = "\n\0";

	printf("%s\n %d\n", a , ft_str_is_printable(a));
	printf("%s\n %d\n",teste, ft_str_is_printable(teste));
}

