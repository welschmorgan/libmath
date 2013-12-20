/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 04:48:21 by mwelsch           #+#    #+#             */
/*   Updated: 2013/12/20 07:04:16 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libmath.h"

t_vec3					*ft_vec3_init(t_vec3 *v)
{
	return (ft_vec3_set(v, 0, 0, 0));
}

t_vec3					*ft_vec3_set(t_vec3 *v,
									 t_vec3_part x,
									 t_vec3_part y,
									 t_vec3_part z)
{
	if (!v)
		return (NULL);
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

t_vec3					*ft_vec3_new(void)
{
	t_vec3				*ret;

	ret = ft_memalloc(sizeof(t_vec3));
	if (!ret)
		return (ret);
	return (ft_vec3_init(ret));
}

void					ft_vec3_del(t_vec3 **v)
{
	if (!v || !*v)
		return ;
	ft_memdel((void**)v);
}

int						ft_vec3_print(t_vec3 *v, int fd)
{
	int					ret;

	ret = ft_putstr_fd("(", fd);
	ret += ft_putnbr_fd(v->x, fd);
	ret += ft_putstr_fd(",", fd);
	ret += ft_putnbr_fd(v->y, fd);
	ret += ft_putstr_fd(",", fd);
	ret += ft_putnbr_fd(v->z, fd);
	ret += ft_putstr_fd(")", fd);
	return (ret);
}

void					ft_vec3_add(t_vec3 *a, t_vec3 *b, t_vec3 *res)
{
	if (!a || !b || !res)
		return ;
	res->x = a->x + b->x;
	res->y = a->y + b->y;
	res->z = a->z + b->z;
}

void					ft_vec3_sub(t_vec3 *a, t_vec3 *b, t_vec3 *res)
{
	if (!a || !b || !res)
		return ;
	res->x = a->x - b->x;
	res->y = a->y - b->y;
	res->z = a->z - b->z;
}

void					ft_vec3_mul(t_vec3 *a, t_vec3 *b, t_vec3 *res)
{
	if (!a || !b || !res)
		return ;
	res->x = a->x * b->x;
	res->y = a->y * b->y;
	res->z = a->z * b->z;
}

void					ft_vec3_div(t_vec3 *a, t_vec3 *b, t_vec3 *res)
{
	if (!a || !b || !res)
		return ;
	res->x = a->x / b->x;
	res->y = a->y / b->y;
	res->z = a->z / b->z;
}

void					ft_vec3_mod(t_vec3 *a, t_vec3 *b, t_vec3 *res)
{
	if (!a || !b || !res)
		return ;
	res->x = a->x % b->x;
	res->y = a->y % b->y;
	res->z = a->z % b->z;
}

t_real					ft_vec3_length(t_vec3 *v)
{
	return (ft_fast_sqrt(v->x * v->x + v->y * v->y + v->z * v->z));
}

t_real					ft_vec3_normalise(t_vec3 *v, t_vec3 *res)
{
	t_real				length;

	length = ft_vec3_length(v);
	ft_vec3_set(res, v->x, v->y, v->z);
	if (length > 0)
	{
		res->x /= length;
		res->y /= length;
		res->z /= length;
	}
	return (length);
}

char		*ft_vec3_tostring(t_vec3 *v)
{
	static char		buf[120];

	buf[sizeof(buf) - 1] = '\0';
	ft_strclr(buf);
	ft_strcpy(buf, ft_itoa(v->x));
	ft_strcat(buf, ",");
	ft_strcat(buf, ft_itoa(v->y));
	ft_strcat(buf, ",");
	ft_strcat(buf, ft_itoa(v->z));
	return (buf);
}
