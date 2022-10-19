/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:28:22 by mboutuil          #+#    #+#             */
/*   Updated: 2022/06/19 19:43:10 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	a;
	char	b;
	char	*base;

	base = "0123456789abcdef";
	i = -1;
	while (str[++i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write (1, &str[i], 1);
		else
		{
			a = base[str[i] / 16];
			b = base[str[i] % 16];
			write (1, "\\", 1);
			write (1, &a, 1);
			write (1, &b, 1);
		}
	}
}
