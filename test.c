/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 06:51:47 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/15 06:52:31 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int d;
	int c;
	int j;

	i = 0;
	j = size;
	while (i <= size / 2)
	{
		c = tab[i];
		d = tab[j];
		tab[i] = d;
		tab[j] = c;
		i++;
		j--;
	}
}

int	main(void)
{
	int tab[5] = {5, 4, 3, 2, 1};
	int i;

	i = 0;
	ft_rev_int_tab(tab, 6);
	while (tab[i])
	{
		printf("%d,", tab[i]);
		i++;
	}
	return (0);
}