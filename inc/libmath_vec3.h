/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 07:00:10 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/14 23:22:58 by mwelsch          ###   ########.fr       */
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

t_vec3					vec3_create(t_real x, t_real y, t_real z);

t_real					vec3_length(t_vec3 v);
t_real					vec3_norm(t_vec3 *v);
t_vec3					vec3_mul(t_vec3 a, t_vec3 b);
t_vec3					vec3_scale(t_vec3 v, t_real factor);
t_vec3					vec3_div(t_vec3 a, t_vec3 b);
t_vec3					vec3_mod(t_vec3 a, t_vec3 b);
t_vec3					vec3_sub(t_vec3 a, t_vec3 b);
t_vec3					vec3_add(t_vec3 a, t_vec3 b);

#endif /* !LIBMATH_H */
