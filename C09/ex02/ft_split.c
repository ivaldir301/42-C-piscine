/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibatalha <ibatalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:58:18 by ibatalha          #+#    #+#             */
/*   Updated: 2025/02/13 17:05:43 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_separator(str[i], sep))
		{
			words++;
			while (str[i] && !is_separator(str[i], sep))
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	*word_splitter(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *) malloc(sizeof(char *) * (i + 1));
	while (str[i] && !is_separator(str[i], sep))
		i++;
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_separator(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	words = (char **) malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (words == NULL || str == NULL || charset == NULL)
		return (NULL);
	while (str[i])
	{
		if (!is_separator(str[i], charset))
		{
			words[j] = word_splitter(&str[i], charset);
			while (str[i] && !is_separator(str[i], charset))
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}

// int	main(void)
// {
// 	char	*str = "Words to.be/splitted*in@six";
// 	char	*sep = "./*@! ";
// 	char	**words = ft_split(str, sep);
// 	int i = 0;

// 	printf("Before: %s\nAfter: \n", str);
// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// }