/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clampf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalesev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:18:27 by dmalesev          #+#    #+#             */
/*   Updated: 2022/12/19 18:18:38 by dmalesev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	clampf(double value, double min, double max)
{
	if (value < min)
		return (min);
	if (value > max)
		return (max);
	return (value);
}
