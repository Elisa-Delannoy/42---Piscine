/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:51:20 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/21 17:19:50 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%d", ft_strlen("urjdhf  vurbpghbtu gptgtmotgt8142665 2! yturisop"));
	printf("%ld", strlen("urjdhf  vurbpghbtu gptgtmotgt8142665 2! yturisop"));
}*/
