/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:39:06 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/25 11:27:50 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				a;
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && i < (n - 1) && s1[i] == s2[i])
		i++;
	a = s1[i] - s2[i];
	return (a);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	sa[] = "ABCdef";	
	char	sb[] = "ABCuu";

	printf("%d\n", ft_strncmp(sa, sb, 0));
	printf("%d\n", strncmp(sa, sb, 0));
}*/