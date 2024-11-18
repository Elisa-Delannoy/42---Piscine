/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntadros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:52:29 by ntadros           #+#    #+#             */
/*   Updated: 2024/07/21 18:16:33 by ntadros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		rush0(int x, int y);
int		rush1(int x, int y);
int		rush2(int x, int y);
int		rush3(int x, int y);
int		rush4(int x, int y);

int	erromessage(void)
{
	write(1, "\nExample : ./outfile 'RushNum' 'x' 'y'\n\n", 40);
	return (1);
}

void	ft_switch(int i, int x, int y)
{
	if (i == 0)
		rush0(x, y);
	else if (i == 1)
		rush1(x, y);
	else if (i == 2)
		rush2(x, y);
	else if (i == 3)
		rush3(x, y);
	else if (i == 4)
		rush4(x, y);
}

int	ft_atoi(int n, char **argv) // convertir chaine de caractere en int
{
	int	j;
	int	o;

	j = 0;
	o = 0;
	while (argv[n][j] >= '0' && argv[n][j] <= '9') // car uniquement chiffres 
	{
		o = o * 10 + argv[n][j] - 48; // convertir en nb 
		j++; // alller a la  case suivante
		if (argv[n][j] == '\0')
		{
			return (o);
			o = 0;
			j = 0;
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	x; // coordonnes 
	int	y;
	int	n; 
	int	i

	x = 0;
	y = 0;
	n = 1; // pour se deplacer dans le premier tableau, commence a 1 car case 0 pas besoin 
	if (argc != 4 || argc == 0) // pourquoi == 0 sachant que != 4 ?
	{
		erromessage();
		return(0);
	}
	i = ft_atoi(n, argv); // convertir en int le contenu case 1 du 1er tableau pour selction num rush
	n++;
	x = ft_atoi(n, argv); // convertir en int le contenu de la case 2 du 1er tableau pour selction coord
	n++;
	y = ft_atoi(n, argv); // convertir en int le cntenude la case 3 du tableau 
	if (i < 0 || i > 4 || x <= 0 || y <= 0)
	{
		erromessage();
		return(0);
	}
	ft_switch(i, x, y);
	return (0);
}
