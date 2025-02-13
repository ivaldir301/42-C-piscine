/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarval <micarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:00:09 by micarval          #+#    #+#             */
/*   Updated: 2025/02/12 15:44:20 by micarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int unsigned	i;

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

/* int main()
{
	char destiny = "hello";
	char *source = "booom";
	unsigned int n;

	n = 4;

	ft_strcpy(destiny, source, n);
	return (0);
}
 */
