/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:13:46 by mfigueir          #+#    #+#             */
/*   Updated: 2025/01/28 12:14:03 by mfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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

	test = ft_str_is_uppercase("TESTE");
	printf("1st %d\n", test);
	test = ft_str_is_uppercase("TESTE");
	printf("2nd %d\n", test);
	test = ft_str_is_uppercase("teste");
	printf("3rd %d\n", test);
	test = ft_str_is_uppercase("1232131");
	printf("4th %d\n", test);
	test = ft_str_is_uppercase("t12121ste121231");
	printf("5ft %d\n", test);
	test = ft_str_is_uppercase("$^&*");
	printf("6th %d\n", test);
	test = ft_str_is_uppercase("");
	printf("7th %d\n", test);
	return (0);
}*/
