/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_div.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 07:12:26 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/13 07:14:28 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libmath.h"
#include <math.h>

t_vec3					vec3_div(t_vec3 a, t_vec3 b)
{
	if (!b.x || !b.y || !b.z)
	{
		a.x = 0.0f;
		a.y = 0.0f;
		a.z = 0.0f;
		return (a);
	}
	a.x = a.x / b.x;
	a.y = a.y / b.y;
	a.z = a.z / b.z;
	return (a);
}
