/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:08:19 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/24 12:43:03 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	a;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	a = s1[i] - s2 [i];
	return (a);
}
/*
#include <stdio.h>
int	main(void)
{
	char	sa[] = "ABZ";
	char	sb[] = "ABA";

	printf("%d", ft_strcmp(sa, sb));
}*/