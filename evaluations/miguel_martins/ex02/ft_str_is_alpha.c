/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:40:57 by mfigueir          #+#    #+#             */
/*   Updated: 2025/01/28 11:41:47 by mfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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

	test = ft_str_is_alpha("TESTE");
	printf("1st %d\n", test);
	test = ft_str_is_alpha("TESTE");
	printf("2nd %d\n", test);
	test = ft_str_is_alpha("teste");
	printf("3rd %d\n", test);
	test = ft_str_is_alpha("1232131");
	printf("4th %d\n", test);
	test = ft_str_is_alpha("132asda2141afsa");
	printf("5ft %d\n", test);
	test = ft_str_is_alpha("$^&*");
	printf("6th %d\n", test);
	test = ft_str_is_alpha("");
	printf("7th %d\n", test);
	return (0);
}*/
