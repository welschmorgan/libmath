/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 23:05:09 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/18 02:36:50 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libmath_ray.h"
#include <stddef.h>

t_ray					*ray_init(t_ray *r, t_vec3 origin, t_vec3 dir)
{
	if (r)
	{
		r->origin = origin;
		r->direction = dir;
	}
	return (r);
}

t_ray_result			*ray_result_init(t_ray_result *r)
{
	if (r)
	{
		r->hit = 0;
		ray_init(&r->ray,
				 vec3_create(0.0f, 0.0f, 0.0f),
				 vec3_create(0.0f, 0.0f, 0.0f));
		r->distance = 0.0;
		r->contact.data = NULL;
		r->contact.point = r->ray.origin;
	}
	return (r);
}
