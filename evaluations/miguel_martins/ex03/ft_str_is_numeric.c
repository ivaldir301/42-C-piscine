/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:11:21 by mfigueir          #+#    #+#             */
/*   Updated: 2025/01/28 12:11:48 by mfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
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

	test = ft_str_is_numeric("TESTE");
	printf("1st %d\n", test);
	test = ft_str_is_numeric("TESTE");
	printf("2nd %d\n", test);
	test = ft_str_is_numeric("teste");
	printf("3rd %d\n", test);
	test = ft_str_is_numeric("1232131");
	printf("4th %d\n", test);
	test = ft_str_is_numeric("t12121ste121231");
	printf("5ft %d\n", test);
	test = ft_str_is_numeric("$^&*");
	printf("6th %d\n", test);
	test = ft_str_is_numeric("");
	printf("7th %d\n", test);
	return (0);
}*/
