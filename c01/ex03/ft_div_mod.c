/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 09:19:51 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/21 17:42:08 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int 	c;
	int	d;
	int	x;
	int	y;
	int	*pdiv;
	int	*pmod;
	
	c = 0;
	d = 0;
	pdiv = &c;
	pmod = &d;	
	x = 10;
	y = 5; 
	ft_div_mod(x, y, pdiv, pmod);
	printf("div is %d, mod is %d", *pdiv, *pmod);
	return(0);
}
*/
