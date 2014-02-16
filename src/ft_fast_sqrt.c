/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fast_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/16 12:15:02 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/16 12:16:05 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libmath.h>


t_real			ft_fast_sqrt(t_real n)
{
	t_real		prev;
	t_real		cur;

	prev = 0.0;
	cur = 1.0;
	while (prev != cur)
	{
		prev = cur;
		cur = 0.5 * (prev + (n / prev));
	}
	return (cur);
}
