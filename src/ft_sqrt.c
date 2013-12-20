/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 08:28:00 by mwelsch           #+#    #+#             */
/*   Updated: 2013/12/16 09:42:53 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libmath.h"

t_real	ft_sqrt(t_real number)
{
	long			i;
	t_real			x2;
	t_real			y;
	const t_real	three_h = 1.5f;

	x2 = number * 0.5f;
	y = number;
	i = * (long *)&y;
	i = 0x5f3759df - (i >> 1);
	y = *(t_real *)&i;
	y = y * (three_h - (x2 * y * y));
	y = y * (three_h - (x2 * y * y));
	y = y * (three_h - (x2 * y * y));

	return (1.0f/y);
}
