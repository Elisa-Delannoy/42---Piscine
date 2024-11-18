/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:28:48 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/29 16:28:53 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbp;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	nbp = 1;
	while (i <= power)
	{
		nbp = nbp * nb;
		i++;
	}
	return (nbp);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(0, 0));
}*/