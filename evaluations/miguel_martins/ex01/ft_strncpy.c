/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:38:12 by mfigueir          #+#    #+#             */
/*   Updated: 2025/01/28 13:29:39 by mfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*src = "source";
	char	dest[] = "destination";
	unsigned int size = 12;
	unsigned int	i;

	i = 0;	
	ft_strncpy(dest, src, size);
	while (i < size)
	{
	write(1, &dest[i], 1);
	
	i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
