/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:34:37 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/23 20:05:06 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z'
			&& (str[i - 1] < '0'
				|| (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
				|| str[i - 1] > 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	i = 0;
	if (str[0] >= 'a' && str[i] <= 'z')
		str[0] = str[0] - 32;
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "salut, comment tu vas";
	printf("%s", ft_strcapitalize(str));
}*/