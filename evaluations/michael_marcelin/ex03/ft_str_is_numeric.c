/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarceli <mmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:09:10 by mmarceli          #+#    #+#             */
/*   Updated: 2025/02/04 10:09:47 by mmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int main(void)
{
    char *test1 = "12345";         
    char *test2 = "123abc";
    char *test3 = "";            
    char *test4 = "0";            
    char *test5 = "9876543210";   
    char *test6 = "12 34";        

    printf("Test 1 (\"%s\"): %d\n", test1, ft_str_is_numeric(test1));
    printf("Test 2 (\"%s\"): %d\n", test2, ft_str_is_numeric(test2));
    printf("Test 3 (\"%s\"): %d\n", test3, ft_str_is_numeric(test3));
    printf("Test 4 (\"%s\"): %d\n", test4, ft_str_is_numeric(test4));
    printf("Test 5 (\"%s\"): %d\n", test5, ft_str_is_numeric(test5));
    printf("Test 6 (\"%s\"): %d\n", test6, ft_str_is_numeric(test6));

    return (0);
}