/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:43:49 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/24 18:56:09 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
		i++;
	s = i;
	i = 0;
	while (src[i] != '\0' && i < nb)
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

	printf("%s\n", strncat(a, b, 2));
	printf("%s\n", ft_strncat(a, b, 2));

}*/
