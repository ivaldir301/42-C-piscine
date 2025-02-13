/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:26:15 by zali              #+#    #+#             */
/*   Updated: 2025/01/26 15:32:38 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	capitalize_if_alpha(char *str)
{
	if (*str >= 97 && *str <= 122)
	{
		*str = *str - 32;
	}
}

int	check_if_num_or_alpha(char *str)
{
	return ((*str >= 48 && *str <= 57)
		|| (*str >= 97 && *str <= 122)
		|| (*str >= 65 && *str <= 90));
}

char	*ft_strcapitalize(char *str)
{
	char	*start;

	start = str;
	capitalize_if_alpha(str);
	str++;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			if (check_if_num_or_alpha(str -1))
			{
				*str = *str + 32;
			}
		}
		if (!check_if_num_or_alpha(str))
		{
			capitalize_if_alpha((str + 1));
		}
		str++;
	}
	return (start);
}

#include <stdio.h>
int check_test(char *t1, char *t2)
{
	int error;
	error = 0;
	while (*t2 != '\0')
	{
		if (*t2 != *t1)
		{
			printf("\n%c should be %c\n", *t1, *t2);
			error++;
			break;
		}
		error = 0;
		t2++;
		t1++;
	}

	return (error);
}

int main()
{
	char	text[] = 
	"salut, ComMeNt tU vas ? 42mots quarante-deux; cinquante+et+un";
	char	test_text[] = 
	"Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
	char *t1 = ft_strcapitalize(text);
	int	error = check_test(t1, test_text);
	if (error)
	{
		printf("The string didnt match.\n");
	}
	else 
	{
		printf("They are both the same.\n");
	}
	printf("CHANGED %s\n", t1);
	printf("ORG: %s\n", test_text);
}

