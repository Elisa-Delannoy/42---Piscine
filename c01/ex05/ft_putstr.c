/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:46:27 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/21 17:42:42 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	write(1, str, count);
}
/*
int	main(void)
{
	char	*cc;

	cc = "HELLO";
	ft_putstr(cc);
}
*/
