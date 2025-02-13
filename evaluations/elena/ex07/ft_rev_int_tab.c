/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:44:42 by hesantos          #+#    #+#             */
/*   Updated: 2025/02/03 18:47:29 by hesantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	fim;
	int	inicio;

	inicio = 0;
	fim = size - 1;
	while (inicio < fim)
	{
		temp = tab[inicio];
		tab[inicio] = tab[fim];
		tab[fim] = temp;
		inicio++;
		fim--;
	}
}

/*int main(void)
{
	int n [7] = {7 ,14 ,21 , 28, 35};
	int size = sizeof(n) /sizeof(n[0]);
	printf("Before array reverse\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d", n[i]);
		printf("\n");
	}
	ft_rev_int_tab(n, size);
	printf("After array reverse\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d", n[i]);
		printf("\n");
	}
return (0);
}
*/
