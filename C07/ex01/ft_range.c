/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:40:45 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/23 18:42:28 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int				*tab;
	unsigned int	size;
	int				i;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = malloc((sizeof(min)) * size);
	if (!(tab))
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int		main(void)
{
	int	min;
	int	max;
	int i;
	int *tab;

	min = -100;
	max = 100;
	i = 0;
	printf("min = %d, max = %d\n", min, max);
	tab = ft_range(min, max);
	while (tab[i])
	{
		printf("%d\n", tab[i]);
		i++;
	}
	if (tab[i] == 0)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	while (tab[i])
	{
		printf("%d\n", tab[i]);
		i++;
	}
}