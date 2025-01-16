/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:55:48 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/16 16:37:05 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	count_digits(int n)
{
	unsigned int	num_digits;

	num_digits = 0;
	while (n != 0)
	{
		n /= 10;
		++num_digits;
	}
	++num_digits;
	return (num_digits);
}

void	int_to_str_rec(int n, char *str, unsigned int num_digits, unsigned int digit)
{
	if (n == 0)
		str[num_digits] = '\0';
	else
	{
		int_to_str_rec(str, n / 10, num_digits, digit + 1);
		str[num_digits - digit] = n % 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;

	str = malloc(sizeof(char) * (count_digits(n) + 1));
	if (!str)
		return (NULL);
	str_to_int(str, n);
}