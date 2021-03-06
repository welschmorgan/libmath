/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath_vec3.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/16 11:21:54 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/19 18:29:03 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBMATH_VEC3_H
# define LIBMATH_VEC3_H

# include <libft_types.h>

typedef struct			s_vec3
{
	t_real				x;
	t_real				y;
	t_real				z;
}						t_vec3;
typedef t_vec3			t_normal;

t_vec3					vec3_create(t_real x, t_real y, t_real z);
t_vec3					vec3_inv(t_vec3 v);

t_vec3					vec3_refract(t_vec3 incident,
									 t_normal normal,
									 t_real eta);
t_vec3					vec3_reflect(t_vec3 incident, t_normal normal);

t_real					vec3_length(t_vec3 v);
t_real					vec3_norm(t_vec3 *v);
t_vec3					vec3_mul(t_vec3 a, t_vec3 b);
t_real					vec3_dot(t_vec3 a, t_vec3 b);
t_vec3					vec3_cross(t_vec3 a, t_vec3 b);
t_vec3					vec3_scale(t_vec3 v, t_real factor);
t_vec3					vec3_div(t_vec3 a, t_vec3 b);
t_vec3					vec3_mod(t_vec3 a, t_vec3 b);
t_vec3					vec3_sub(t_vec3 a, t_vec3 b);
t_vec3					vec3_add(t_vec3 a, t_vec3 b);

t_vec3					vec3_zero();
t_vec3					vec3_unit_x();
t_vec3					vec3_unit_y();
t_vec3					vec3_unit_z();
t_vec3					vec3_unit_scale();

#endif /* !LIBMATH_H */
