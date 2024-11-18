/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:16:49 by edelanno          #+#    #+#             */
/*   Updated: 2024/08/05 19:16:50 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	fln(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	flen(char **str, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] && i < size)
	{
		count += fln(str[i]);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*r;

	if (size == 0)
	{
		r = malloc(1 * sizeof(char));
		r[0] = '\0';
		return (r);
	}
	r = malloc((fln(sep) * (size - 1) + (flen(strs, size)) + 1) * sizeof(char));
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			r[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			r[k++] = sep[j++];
	}
	r[k] = '\0';
	return (r);
}
/*
#include <stdio.h>

int    main()
{
    char **strs;
    strs = (char*[]){ "hello", "test"},
    printf("%s\n", ft_strjoin(2, strs, ","));
}*/
