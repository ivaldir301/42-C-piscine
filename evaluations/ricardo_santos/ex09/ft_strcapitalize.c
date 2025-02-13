/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricsanto <ricsanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:29:38 by ricsanto          #+#    #+#             */
/*   Updated: 2025/01/31 09:45:02 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	capitalize_ltr(char *str)
{
	if (*str >= 'a' && *str <= 'z' )
	{
		*str -= 32;
	}
}

void	lowercase_ltr(char *str)
{
	if (*str >= 'A' && *str <= 'Z' )
	{
		*str += 32;
	}
}

int	check_word_start(char last_char)
{
	char	*word_div;

	word_div = " +-";
	while (*word_div != '\0')
	{
		if (last_char == *word_div)
		{
			return (1);
		}
		word_div++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (counter == 0 || check_word_start(str[counter - 1]))
		{
			capitalize_ltr(&str[counter]);
		}
		else
		{
			lowercase_ltr(&str[counter]);
		}
		counter++;
	}
	return (str);
}

#include<stdio.h>
int	main(void)
{
	char	c[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(c);
	printf("%s", c);
}

