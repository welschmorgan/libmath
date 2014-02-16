/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa_impl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/15 06:29:05 by mwelsch           #+#    #+#             */
/*   Updated: 2014/02/15 20:43:46 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_memory.h>
#include <libft_string.h>
#include <libft_printf.h>
#include <libft_converters.h>
#include <stdio.h>
#include <string.h>

char			*myftoa(double num, int precision)
{
	int			ipart;
	int			dpart;
	int			i;
	double		dec;
	static char	dbuf[65] = {0};

	ipart = num;
	dec = num - ipart;
	dpart = dec * 100000000;
	ft_memset(dbuf, 0x0, 65);
	ft_strncpy(dbuf, ft_itoa(num), 32);
	ft_strncat(dbuf, ".", 1);
	if (dpart < 0)
		dpart = -dpart;
	ft_strncat(dbuf, ft_ntoa(dpart, 10),
			   FT_MIN(precision, (int)ft_number_length(dpart, 10)));
	if (precision <= (int)ft_number_length(dpart, 10))
		dbuf[ft_strlen(dbuf) - 1] = ((int)(dbuf[ft_strlen(dbuf) - 1] - '0')) + 1;
	i = precision;
	ft_printf("%s: i(%u) length(%l) int_part(%l) dec_part(%l)\n",
			  __FUNCTION__, (long)i, (long)ft_number_length(dpart, 10),
			  (long)ipart, (long)dpart);
	while (i > FT_MAX((int)ft_number_length(dpart, 10), 0))
	{
		ft_strcat(dbuf, "0");
		i--;
	}
	return (dbuf);
}

void			test(float num, int precision)
{
	static char	buf[128] = {0};
	static char	buf2[128] = {0};
	char		*r;

	sprintf(buf, "%%4.%if", precision);
	sprintf(buf2, buf, num);
	r = myftoa(num, precision);
	printf("ftoa(%s, prec:%i): %s%s%s\033[0m\n",
		   buf2, precision, r,
		   ft_strequ(buf2, r)
		   ? "\033[0;31m"
		   : "\033[1;34m",
		   ft_strequ(buf2, buf)
		   ? "SUCCESS"
		   : "FAILURE");
}

# define PI 3.145795865

int				main(void)

{
	test(1.0f, 4);
	test(PI, 4);
	test(PI, 10);
	return (1);
}
