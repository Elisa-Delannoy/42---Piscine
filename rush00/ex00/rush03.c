/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntadros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:52:32 by ntadros           #+#    #+#             */
/*   Updated: 2024/07/20 20:06:26 by ntadros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	printx3(int i, int a)
{
	while (i <= a - 1)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == a -1)
			ft_putchar('C');
		else
			ft_putchar('B');
		if (i == a - 1)
			ft_putchar('\n');
		i++;
	}
	i = 0;
	return (0);
}

int	printy3(int i, int b)
{
	while (i <= b - 1)
	{
		if (i == 0 || i == b - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		if (i == b - 1)
			ft_putchar('\n');
		i++;
	}
	i = 0;
	return (0);
}

int	rush3(int a, int b)
{
	int	i;
	int	n;

	if (a < 0 || b < 0)
	{
		write(1, "Mdrr rentre des numeros stp\n", 28);
	}
	i = 0;
	n = 0;
	while (n <= b - 1)
	{
		if (n == 0 || n == b - 1)
			printx3(i, a);
		else
			printy3(i, a);
		n++;
	}
	return (0);
}
