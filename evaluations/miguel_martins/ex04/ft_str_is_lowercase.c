/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:12:26 by mfigueir          #+#    #+#             */
/*   Updated: 2025/01/28 12:12:47 by mfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	int test;

	test = ft_str_is_lowercase("TESTE");
	printf("1st %d\n", test);
	test = ft_str_is_lowercase("TESTE");
	printf("2nd %d\n", test);
	test = ft_str_is_lowercase("teste");
	printf("3rd %d\n", test);
	test = ft_str_is_lowercase("1232131");
	printf("4th %d\n", test);
	test = ft_str_is_lowercase("t12121ste121231");
	printf("5ft %d\n", test);
	test = ft_str_is_lowercase("$^&*");
	printf("6th %d\n", test);
	test = ft_str_is_lowercase("");
	printf("7th %d\n", test);
	return (0);
}*/
