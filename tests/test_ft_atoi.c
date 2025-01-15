/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:30:31 by vboxuser          #+#    #+#             */
/*   Updated: 2025/01/15 13:12:45 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

extern	int	ft_atoi(const char *str);

void	perform_test(const char *input, int expected)
{
	int		result;
	char	*print_result;

	result = ft_atoi(input);
	if (result == expected)
		print_result = "\033[0;32m\u2713\033[0m";
	else
		print_result = "\033[0;31m\u274C\033[0m";
	printf("%s\t\"%s\"\n", print_result, input);
}

void	test_ft_atoi(void)
{
	printf("Testing ft_atoi\n");
	perform_test("123", 123);
	perform_test("-123", -123);
	perform_test("0", 0);
	perform_test("-0", 0);
	perform_test(" 456", 456);
	perform_test(" -789", -789);
	perform_test("123abc", 123);
	perform_test("-456xyz", -456);
	perform_test("abc123", 0);
	perform_test("-xyz456", 0);
	perform_test("abc123xyz", 0);
	perform_test("", 0);
	perform_test("abc", 0);
	perform_test("+", 0);
	perform_test("-", 0);
	perform_test("+123", 123);
	perform_test("2147483647", 2147483647);
	perform_test("-2147483648", -2147483648);
	perform_test("2147483648", -2147483648);
	perform_test("-2147483649", 2147483647);
	perform_test("123\0456", 123);
	perform_test("--123", 0);
	perform_test("++123", 0);
	return ;
}
