/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xorshift32.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:25:49 by dmalesev          #+#    #+#             */
/*   Updated: 2022/12/20 14:45:03 by dmalesev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint32_t	xorshift32(void)
{
	static uint32_t	x;

	if (x == 0)
		x = 15262;
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	return (x);
}