/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarkic <hakarkic@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:51:55 by hakarkic          #+#    #+#             */
/*   Updated: 2024/07/27 13:27:15 by hakarkic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	z;
	int	tmp;

	a = 0;
	z = size - 1;
	while (a < z)
	{
		tmp = tab[a];
		tab[a] = tab[z];
		tab[z] = tmp;
		a++;
		z--;
	}
}
/*
int	main(void)
{
	int	tab[5];
	
	tab[0] = 1;
	tab[1] = 3;
	tab[2] = 5;
	tab[3] = 7;
	tab[4] = 9;
	ft_rev_int_tab(tab, 5);
	for (int i = 0; i < 5; i++)
		printf("%d ", tab[i]);
	printf("\n");
	return 0;
}
*/
