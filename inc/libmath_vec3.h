/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 04:40:25 by mwelsch           #+#    #+#             */
/*   Updated: 2013/12/20 07:01:36 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_H
# define VEC3_H

# include <libmath_config.h>

typedef int				t_vec3_part;
typedef struct			s_vec3
{
	t_vec3_part			x;
	t_vec3_part			y;
	t_vec3_part			z;
}						t_vec3;

t_vec3					*ft_vec3_init(t_vec3 *v);
t_vec3					*ft_vec3_set(t_vec3 *v,
									 t_vec3_part x,
									 t_vec3_part y,
									 t_vec3_part z);
t_vec3					*ft_vec3_new(void);
void					ft_vec3_del(t_vec3 **v);
int						ft_vec3_print(t_vec3 *v, int fd);

void					ft_vec3_add(t_vec3 *a, t_vec3 *b, t_vec3 *res);
void					ft_vec3_sub(t_vec3 *a, t_vec3 *b, t_vec3 *res);
void					ft_vec3_mul(t_vec3 *a, t_vec3 *b, t_vec3 *res);
void					ft_vec3_div(t_vec3 *a, t_vec3 *b, t_vec3 *res);
void					ft_vec3_mod(t_vec3 *a, t_vec3 *b, t_vec3 *res);

t_vec3_part				ft_vec3_x(t_vec3 *v);
t_vec3_part				ft_vec3_y(t_vec3 *v);
t_vec3_part				ft_vec3_z(t_vec3 *v);

char					*ft_vec3_tostring(t_vec3 *v);

/*
 * Returns the length of this vector
 */
t_real					ft_vec3_length(t_vec3 *v);
/*
 * Returns the length of the now normalised vector
 */
t_real					ft_vec3_normalise(t_vec3 *v, t_vec3 *res);

#endif /* !VEC3_H */
