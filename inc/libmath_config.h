/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath_config.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 06:14:09 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/14 23:27:25 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBMATH_CONFIG
# define LIBMATH_CONFIG

# if !defined (REAL_DEFINED)
#  if defined(USE_DOUBLE_PRECISION) || defined(DOUBLE_PRECISION)
typedef double		t_real;
#  else
typedef float		t_real;
#  endif
#  define REAL_DEFINED
# endif

#endif /* !LIBMATH_CONFIG */
