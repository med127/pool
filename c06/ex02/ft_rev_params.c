/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 00:58:05 by mboutuil          #+#    #+#             */
/*   Updated: 2022/06/26 01:02:40 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac;
	if (ac > 1)
	{
		while (i > 1)
		{
			j = 0;
			while (av[i - 1][j] != '\0')
			{
				write(1, &av[i - 1][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
}