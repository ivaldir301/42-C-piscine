/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto <rneto@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-04 15:14:39 by rneto             #+#    #+#             */
/*   Updated: 2025/02/08 11:43:24 by ibatalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (*s1 != 0 || *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "cat123";
	char s2[] = "";
	printf("custom function %d\n",ft_strncmp(s1,s2, 5));
	printf("strncmp original%d\n", strncmp(s1, s2, 5));
	return (0);
}

