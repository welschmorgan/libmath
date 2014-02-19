/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_refract.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 18:24:35 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/19 18:32:24 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libmath_vec3.h>
#include <math.h>
/*
** eta is the refraction index (e.g 1.5f)
*/
t_vec3					vec3_refract(t_vec3 incident,
									 t_normal normal,
									 t_real eta)
{
	t_real				ndotl;
	t_real				k;

	ndotl = vec3_dot(incident, normal);
	k = 1.0f - eta * eta * (1.0f - ndotl * ndotl);
	if (k < 0.0f)
		return (vec3_create(0.0f, 0.0f, 0.0f));
	return (vec3_sub(vec3_scale(incident, eta),
					 vec3_scale(normal, eta * ndotl + sqrt(k))));
}
