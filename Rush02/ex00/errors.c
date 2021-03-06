/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:21:08 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/28 10:24:36 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		error_usage(void)
{
	ft_putstr("Usage:\n");
	ft_putstr("rush-02 [dictionary] number\n");
	return (1);
}

int		dict_error(void)
{
	ft_putstr("Dict Error\n");
	return (0);
}

void	*error_malloc(void)
{
	ft_putstr("Memory allocation error\n");
	return (0);
}
