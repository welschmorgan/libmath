/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_result_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 23:07:57 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/14 23:09:12 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath_ray.h"

t_ray_result			ray_result_create(int hit, t_ray ray, t_real dist)
{
	t_ray_result		res;

	res.hit = hit;
	res.ray = ray;
	res.distance = dist;
	return (res);
}
