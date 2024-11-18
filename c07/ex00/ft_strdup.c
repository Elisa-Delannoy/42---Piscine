/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:20:17 by edelanno          #+#    #+#             */
/*   Updated: 2024/08/01 14:20:20 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (newstr == NULL)
		return (0);
	while (src[i] != '\0')
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;

	str = ft_strdup("0561qxeiwhemcrc5t71r8dtexhmkewxrew4c4r");
	printf("%s\n", str);
	printf("%s", strdup("0561qxeiwhemcrc5t71r8dtexhmkewxrew4c4r"));
}*/
