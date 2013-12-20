/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 05:51:59 by mwelsch           #+#    #+#             */
/*   Updated: 2013/12/20 06:56:55 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libmath.h>
#include <libft_string.h>
#include <libft_printf.h>
#include "main.h"
#include <math.h>
#include <stdio.h>

int				main(void)
{
	t_vec3		v;
	t_vec3		v2;
	t_vec3		r;

	ft_vec3_init(&v);
	ft_vec3_print(&v, 1);
	ft_putendl_fd("", 1);
	ft_vec3_set(&v, 42, 42, 42);
	ft_vec3_set(&v2, 42, 42, 42);
	ft_vec3_print(&v, 1);
	ft_putendl_fd("", 1);
	ft_vec3_add(&v, &v2, &r);
	ft_vec3_print(&r, 1);
	ft_putendl_fd("", 1);

	printf("Vector[%s]: length = %4.2f\n", ft_vec3_tostring(&v), ft_vec3_length(&v));
	printf("Sqrt(%4.2f): %4.2f(ft) %4.2f(libc)\n", 42.0, ft_fast_sqrt(42.0), sqrt(42.0));
	return (0);
}
