/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 23:41:22 by alexander         #+#    #+#             */
/*   Updated: 2024/12/09 14:31:08 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char c)
{
	return (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v');
}

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				num;
	int				sign;

	i = 0;
	while (ft_isspace(nptr[i]))
		++i;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		++i;
	}
	num = 0;
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
		num = (num * 10) - (nptr[i++] - '0');
	return (sign * -num);
}
