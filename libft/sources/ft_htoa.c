/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalesev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:09:57 by dmalesev          #+#    #+#             */
/*   Updated: 2022/12/17 20:11:47 by dmalesev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_htoa(unsigned int hex)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * 9);
	if (str == NULL)
		return (NULL);
	i = 7;
	while (i >= 0)
	{
		str[i] = "0123456789ABCDEF"[hex & 0xF];
		hex >>= 4;
		i--;
	}
	str[8] = '\0';
	return (str);
}
