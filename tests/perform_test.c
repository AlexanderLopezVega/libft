/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:22:19 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/16 15:34:23 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "test.h"
#define CHECK_MARK "\033[0;32m\u2713\033[0m"
#define CROSS_MARK "\033[0;31m\u274C\033[0m"

void	perform_test(const char *test_name, const void *a, const void *b, int (*cmp_fun)(const void *a, const void *b))
{
	int		cmp_res;
	char	*print_res;

	cmp_res = cmp_fun(a, b);
	if (!cmp_res)
		print_res = CHECK_MARK;
	else
		print_res = CROSS_MARK;
	printf("%s %s\n", print_res, test_name);
}