/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:52:13 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/29 09:52:23 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_strcomp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		a;
	int		i;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		a = i + 1;
		while (argv[a])
		{
			if (ft_strcomp(argv[i], argv[a]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[a];
				argv[a] = temp;
			}
			a++;
		}
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
