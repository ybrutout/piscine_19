/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 09:38:56 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/15 13:44:10 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n + 1] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[] = "yannah";
	char src[] = "nahamalameilleuredemessoeurs";
	unsigned int n;

	n = 10;
	ft_strncpy(dest, src, n);
	printf("%s" ,dest);
	return(0);
}
