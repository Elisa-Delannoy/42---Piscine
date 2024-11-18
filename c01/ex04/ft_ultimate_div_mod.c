/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:25:22 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/21 17:28:57 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	e;
	int	f;

	e = *a / *b;
	f = *a % *b;
	*a = e;
	*b = f;
}
/*
int	main()
{
	int	c;
	int	d;

	c = 11;
	d = 2;
	ft_ultimate_div_mod(&c, &d);
	printf("%d div, %d mod", c, d);
}
*/
