/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath_config.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 06:14:09 by mwelsch           #+#    #+#             */
/*   Updated: 2013/12/20 07:15:22 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBMATH_CONFIG
# define LIBMATH_CONFIG

# ifdef USE_DOUBLE_PRECISION
typedef double		t_real;
# else
typedef float		t_real;
# endif

#endif /* !LIBMATH_CONFIG */
