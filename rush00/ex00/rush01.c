/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntadros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:52:32 by ntadros           #+#    #+#             */
/*   Updated: 2024/07/20 20:05:35 by ntadros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	printx1(int i, int a)
{
	while (i <= a - 1)
	{
		if (i == 0)
			ft_putchar('/');
		else if (i == a -1)
			ft_putchar('\\');
		else
			ft_putchar('*');
		if (i == a - 1)
			ft_putchar('\n');
		i++;
	}
	i = 0;
	return (0);
}

int	printz1(int i, int a)
{
	while (i <= a - 1)
	{
		if (i == 0)
			ft_putchar('\\');
		else if (i == a - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
		if (i == a - 1)
			ft_putchar('\n');
		i++;
	}
	i = 0;
	return (0);
}

int	printy1(int i, int b)
{
	while (i <= b - 1)
	{
		if (i == 0 || i == b - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
		if (i == b - 1)
			ft_putchar('\n');
		i++;
	}
	i = 0;
	return (0);
}

int	rush1(int a, int b)
{
	int	i;
	int	n;

	if (a < 0 || b < 0)
	{
		write(1, "Mdrr rentre des numeros stp\n", 28);
	}
	i = 0; // ??
	n = 0;
	while (n <= b - 1)
	{
		if (n == 0)
			printx1(i, a);
		else if (n == b - 1)
			printz1(i, a);
		else
			printy1(i, a);
		n++;
	}
	return (0);
}
