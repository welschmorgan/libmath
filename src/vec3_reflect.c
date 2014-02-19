/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_reflect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 18:24:05 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/19 18:24:24 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libmath_vec3.h>

t_vec3					vec3_reflect(t_vec3 incident, t_normal normal)
{
	return (vec3_sub(incident,
					 vec3_scale(normal, 2.0f * vec3_dot(incident, normal))));
}
