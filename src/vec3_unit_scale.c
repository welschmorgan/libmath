/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_unit_scale.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 13:12:14 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/19 13:12:28 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libmath_vec3.h"

t_vec3					vec3_unit_scale()
{
	return (vec3_create(1.0f, 1.0f, 1.0f));
}
