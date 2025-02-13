/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-waal <fde-waal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:45:33 by fde-waal          #+#    #+#             */
/*   Updated: 2025/02/03 15:20:25 by fde-waal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	int	diff1;
	int	diff2;

	s1 = "Helloooajdfa";
	s2 = "Hellooos";
	diff1 = ft_strcmp(s1, s2);
	diff2 = strcmp(s1, s2);

	printf("The diff using strcmp is:%d\n", diff1);
	printf("The diff using ft_strcmp is:%d\n", diff2);
	return (0);
}