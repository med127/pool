/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:54:46 by mboutuil          #+#    #+#             */
/*   Updated: 2022/06/13 22:59:49 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#include <unistd.h>
int	ft_str_is_uppercase(char	*str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			r = 1;
			i++;
		}
		else
		{
			r = 0;
			break ;
		}
	}
	return (r);
}

