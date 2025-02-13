/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:16:04 by mfigueir          #+#    #+#             */
/*   Updated: 2025/01/28 12:16:25 by mfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
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

	test = ft_str_is_printable("TESTé ë");
	printf("1st %d\n", test);
	test = ft_str_is_printable("TESTE");
	printf("2nd %d\n", test);
	test = ft_str_is_printable("teste");
	printf("3rd %d\n", test);
	test = ft_str_is_printable("1232131");
	printf("4th %d\n", test);
	test = ft_str_is_printable("t12121ste121231");
	printf("5ft %d\n", test);
	test = ft_str_is_printable("$^&*");
	printf("6th %d\n", test);
	test = ft_str_is_printable("");
	printf("7th %d\n", test);
	return (0);
}*/
