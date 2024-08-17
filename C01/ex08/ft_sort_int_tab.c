/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarkic <hakarkic@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:20:24 by hakarkic          #+#    #+#             */
/*   Updated: 2024/07/28 12:07:19 by hakarkic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size - 1)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5];

	tab[0] = 5;
	tab[1] = 1;
	tab[2] = 10;
	tab[3] = -8;
	tab[4] = 7;
	ft_sort_int_tab(tab, 5);
	for(int i = 0; i < 5; i++)
		printf("%d ", tab[i]);
	printf("\n");
	return 0;
}
*/
