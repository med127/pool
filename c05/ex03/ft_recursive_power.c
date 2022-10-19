/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 05:32:13 by mboutuil          #+#    #+#             */
/*   Updated: 2022/06/21 05:32:42 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 || (nb == 0 && power > 0))
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include<stdio.h>
int main ()
{
    printf("%d\n",ft_recursive_power(3,2));
    
}*/
