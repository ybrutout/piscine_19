/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 15:50:03 by tpetit            #+#    #+#             */
/*   Updated: 2020/09/12 16:50:12 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush_negatif(int *x, int *y)
{
	if (*x < 0)
		*x = 0 - *x;
	if (*y < 0)
		*y = 0 - *y;
}

void	ft_check_case(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1 && y > 1 && x > 1))
		write(1, "/", 1);
	else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
		write(1, "\\", 1);
	else
		write(1, "*", 1);
}

void	rush(int x, int y)
{
	int i;
	int j;

	if (x == 0 || y == 0)
		return ;
	j = -1;
	rush_negatif(&x, &y);
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
			{
				ft_check_case(x, y, i, j);
			}
			else
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int		main(void)
{
	rush(1, 1);
	return (0);
}