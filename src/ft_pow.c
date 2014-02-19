/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/16 12:36:42 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/16 12:39:48 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libmath_utils.h>

t_real			ft_pow(t_real num, unsigned int pow)
{
	t_real		r;

	r = 1;
	while (pow && pow--)
		r *= num;
	return (r);
}