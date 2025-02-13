/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelendo <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:06:23 by gmelendo          #+#    #+#             */
/*   Updated: 2025/02/02 20:25:04 by gmelendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("sdfsfsf"));
	printf("%d\n", ft_str_is_lowercase("FGGDFHGHGF"));
	printf("%d\n", ft_str_is_lowercase(" "));
	printf("%d\n", ft_str_is_lowercase("545454"));
	return (0);
}
 */