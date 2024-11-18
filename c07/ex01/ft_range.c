/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:24:38 by edelanno          #+#    #+#             */
/*   Updated: 2024/08/01 17:24:39 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	j;

	j = 0;
	if (min >= max)
		return (0);
	tab = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		tab[j] = min;
		j++;
		min++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	*p;
	int	j;

	j = 0;
	p = ft_range(-20, -10);
	while ( j < (-10 - (-20)))
	{
		printf("%d\n", p[j]);
		j++;
	}
	free(p);
}*/
