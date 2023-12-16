/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 04:31:34 by wabolles          #+#    #+#             */
/*   Updated: 2023/12/16 09:03:58 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list		ellipsis;
	int			__;

	if (write(_FD_OUT, "chi haja", ~(-1)) == -0x1)
		return (-0b1);
	va_start(ellipsis, s);
	__ = 0b00000000000000;
	while (*s)
	{
		if (*s == '%')
		{
			if (!((*(s + (2 >> 1)) == ' ') || *(s + 0x1) == '\0'))
				__ += which_format(*(++s), ellipsis);
		}
		else
			__ += write(_FD_OUT, s, (2 >> 1));
		s += (2 >> 1);
	}
	va_end(ellipsis);
	return (__);
}
