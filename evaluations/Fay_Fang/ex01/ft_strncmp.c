/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:42 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/03 15:20:51 by fde-waal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	diff;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0' && i < n)
		i++;
	if (n <= 0 || i >= n)
		return (0);
	diff = s1[i] - s2[i];
	return (diff);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	int	n;
	int	diff1;
	int	diff2;

	s1 = "Hellooo";
	s2 = "Hello";
	n = 6;
	diff1 = ft_strncmp(s1, s2, n);
	diff2 = strncmp(s1, s2, n);

	printf("The diff using strcmp is:%d\n", diff1);
	printf("The diff using ft_strcmp is:%d\n", diff2);
	return (0);
}