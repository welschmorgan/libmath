/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_result_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 23:07:57 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/15 23:51:49 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath_ray.h"

t_ray_result			ray_result_create(int hit, t_ray ray,
										  t_real dist, void *data)
{
	t_ray_result		res;

	res.hit = hit;
	res.ray = ray;
	res.distance = dist;
	res.data = data;
	return (res);
}
