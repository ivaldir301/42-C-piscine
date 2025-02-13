/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dviegas <dviegas@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:02:39 by dviegas           #+#    #+#             */
/*   Updated: 2025/02/10 10:47:55 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;
	int	j;

	j = 0;
	count = 0;
	in_word = 0;
	while (str[j] != '\0')
	{
		if (is_separator(str[j], charset) == 0)
		{
			if (in_word == 0)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
		j++;
	}
	return (count);
}

char	*copy_word(char *str, char *charset)
{
	int		len;
	int		k;
	char	*word;

	k = 0;
	len = 0;
	while (str[len] && !is_separator(str[len], charset))
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (k < len)
	{
		word[k] = str[k];
		k++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**result;
	int		index;

	words = count_words(str, charset);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	index = 0;
	while (*str)
	{
		if (!is_separator(*str, charset))
		{
			result[index] = copy_word(str, charset);
			index++;
			while (*str && !is_separator(*str, charset))
				str++;
		}
		else
		{
			str++;
		}
	}
	result[index] = NULL;
	return (result);
}

 #include <stdio.h>
 int main() {
 	char str[] = "Hello , World! Welcome to 42.";
 	char charset[] = ",!.";

	char **result = ft_split(str, charset);
 	if (!result) {
 		printf("Erro ao alocar memória!\n");
 		return (1);
 	}

 	for (int i = 0; result[i] != NULL; i++) {
 		printf("Palavra %d: %s\n", i + 1, result[i]);
		free(result[i]); // Liberar a memória alocada para cada palavra
 	}
 	free(result); // Liberar o array de ponteiros

 	return (0);
 }
