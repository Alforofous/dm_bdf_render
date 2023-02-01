/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_rangef.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:20:07 by dmalesev          #+#    #+#             */
/*   Updated: 2022/12/20 14:45:04 by dmalesev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	random_rangef(double min, double max)
{
	double	random;

	random = ((double)xorshift32() / (double)UINT32_MAX);
	return (((max - min) * random) + min);
}
