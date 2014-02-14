/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_scale.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 07:11:57 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/13 07:12:18 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libmath.h"
#include <math.h>

t_vec3					vec3_scale(t_vec3 v, t_real factor)
{
	v.x *= factor;
	v.y *= factor;
	v.z *= factor;
	return (v);
}
