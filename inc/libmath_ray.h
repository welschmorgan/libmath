/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath_ray.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 23:05:53 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/15 23:51:28 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBMATH_RAY_H
# define LIBMATH_RAY_H

# include <libmath_vec3.h>

typedef struct			s_ray
{
	t_vec3				origin;
	t_vec3				direction;
}						t_ray;

typedef struct			s_ray_result
{
	int			hit;
	t_ray		ray;
	double		distance;
	void		*data;
}						t_ray_result;

t_ray					ray_create(t_vec3 origin, t_vec3 dir);
t_ray_result			ray_result_create(int hit, t_ray ray,
										  t_real dist, void *data);

#endif /* !LIBMATH_RAY_H */
