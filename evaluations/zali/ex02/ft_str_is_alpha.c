/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 12:44:22 by zali              #+#    #+#             */
/*   Updated: 2025/01/26 13:30:52 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	result;
	int	ascii;

	result = 1;
	while (*str != '\0')
	{
		ascii = *str;
		if (!((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)))
		{
			result = 0;
			break ;
		}
		str++;
	}
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	char name[] = "SXSaasdasdASDASDasdasdasd";
// 	int res = ft_str_is_alpha(name);
// 	printf("%i", res);
// }