/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 05:23:14 by mboutuil          #+#    #+#             */
/*   Updated: 2022/06/21 19:06:27 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*#include<stdio.h>
int main ()
{
    printf("%d\n",ft_iterative_power(2,3));
    
}*/
