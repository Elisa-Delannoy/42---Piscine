/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:36:14 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/24 18:48:59 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
		i++;
	s = i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[s + i] = src[i];
		i++;
	}
	dest[i + s] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	a[25] = "bonjour";
	char	b[] = "hello";
	
	printf("%s\n", strcat(a, b));
	printf("%s\n", ft_strcat(a, b));

}*/