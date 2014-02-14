/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath_vec2.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 23:05:31 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/14 23:09:17 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBMATH_VEC2_H
# define LIBMATH_VEC2_H

typedef struct			s_vec2
{
	t_real				x;
	t_real				y;
}						t_vec2;

t_vec2					vec2_create(t_real x, t_real y);

#endif /* !LIBMATH_VEC2_H */
