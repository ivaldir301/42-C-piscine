/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:04:24 by zali              #+#    #+#             */
/*   Updated: 2025/01/26 13:34:33 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	result;
	int	ascii;

	result = 1;
	while (*str != '\0')
	{
		ascii = *str;
		if (!(ascii >= 65 && ascii <= 90))
		{
			result = 0;
			break ;
		}
		str++;
	}
	return (result);
}
