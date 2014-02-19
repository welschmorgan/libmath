/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_zero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 13:10:15 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/19 13:12:47 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libmath_vec3.h"

t_vec3					vec3_zero()
{
	return (vec3_create(0.0f, 0.0f, 0.0f));
}