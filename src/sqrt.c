/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 06:12:07 by mwelsch           #+#    #+#             */
/*   Updated: 2013/12/20 06:51:09 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libmath.h>


t_real			ft_fast_sqrt(t_real n)
{
	t_real		prev = 0;
	t_real		cur = 1;

	while(prev != cur)
	{
		prev = cur;
		cur = 0.5 * (prev + (n / prev));
	}
	return (cur);
}
