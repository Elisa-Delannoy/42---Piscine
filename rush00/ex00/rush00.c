/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntadros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:52:32 by ntadros           #+#    #+#             */
/*   Updated: 2024/07/20 20:05:10 by ntadros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	printx0(int i, int a)// lignes extremites 
{
	while (i <= a - 1)
	{
		if (i == 0 || i == a - 1)//colonnes etremites 
 			ft_putchar('o');
		else
			ft_putchar('-');
		if (i == a - 1)
			ft_putchar('\n');
		i++;
	}
	i = 0;
	return (0);
}

int	printy0(int i, int b)//ligne milieu
{
	while (i <= b - 1)
	{
		if (i == 0 || i == b - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		if (i == b - 1)z
			ft_putchar('\n');
		i++;
	}
	i = 0;
	return (0);
}

int	rush0(int a, int b)
{
	int	i;
	int	n;

	if (a < 0 || b < 0)
	{
		write(1, "Mdrr rentre des numeros stp\n", 28);
	}
	i = 0;// colonne 
	n = 0;// ligne
	while (n <= b - 1) //nb lignes max, -1 car commence a 0
	{
		if (n == 0 || n == b - 1)// lignes extremites 
			printx0(i, a);
		else
			printy0(i, a);// ligne milieu
		n++;
	}
	return (0);
}
