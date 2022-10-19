/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:52:33 by mboutuil          #+#    #+#             */
/*   Updated: 2022/06/29 17:52:48 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		c;
	int		ver;

	i = 0;
	j = 0;
	c = 0;
	ver = 1;
	while (i < size)
		ver += ft_strlen(strs[i++]) + ft_strlen(sep);
	str = malloc(sizeof(char *) * ver);
	i = -1;
	while (++i < size)
	{
		while (strs[i][c])
			str[j++] = strs[i][c++];
		c = 0;
		while (sep[c] && i < size - 1)
			str[j++] = sep[c++];
		c = 0;
	}
	str[j] = '\0';
	return (str);
}

/*int	main (int ac, char **av)
{
	if(ac > 1)
		printf("%s", ft_strjoin(3,&av[1],"-<3-"));
}*/
