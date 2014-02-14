/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 07:12:52 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/14 23:21:46 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBMATH_UTILS_H
# define LIBMATH_UTILS_H

# include "libmath_config.h"

t_real		ft_fabs(t_real number);
t_real		ft_abs(t_real nbr);
t_real		ft_clamp(t_real number, t_real min, t_real max);
t_real		ft_fast_sqrt(t_real number);
t_real		ft_sqrt(t_real number);

#endif /* !LIBMATH_UTILS_H */
