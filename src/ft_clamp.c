/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 07:08:20 by mwelsch           #+#    #+#             */
/*   Updated: 2013/12/20 07:14:18 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath_utils.h"

t_real		ft_clamp(t_real number, t_real min, t_real max)
{
	if (number > max)
		return (max);
	if (number < min)
		return (min);
	return (number);
}
