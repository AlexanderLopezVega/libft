/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:30:31 by vboxuser          #+#    #+#             */
/*   Updated: 2025/01/16 15:29:57 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

extern int	ft_atoi(const char *str);

// void	perform_test(const char *input, int expected)
// {
// 	int		result;
// 	char	*print_result;

// 	result = ft_atoi(input);
// 	if (result == expected)
// 		print_result = "\033[0;32m\u2713\033[0m";
// 	else
// 		print_result = "\033[0;31m\u274C\033[0m";
// 	printf("%s\t\"%s\"\n", print_result, input);
// }

int	cmp_atoi(const void *a, const void *b)
{
	return (ft_atoi((char *)(a)) - *(int *)(b));
}

void	atoi_test(const char *str, const int expected)
{
	perform_test(str, (void *)(str), (void *)(&expected), &cmp_atoi);
}

void	test_ft_atoi(void)
{
	printf("Testing ft_atoi\n");
	atoi_test("123", 123);
	atoi_test("-123", -123);
	atoi_test("0", 0);
	atoi_test("-0", 0);
	atoi_test(" 456", 456);
	atoi_test(" -789", -789);
	atoi_test("123abc", 123);
	atoi_test("-456xyz", -456);
	atoi_test("abc123", 0);
	atoi_test("-xyz456", 0);
	atoi_test("abc123xyz", 0);
	atoi_test("", 0);
	atoi_test("abc", 0);
	atoi_test("+", 0);
	atoi_test("-", 0);
	atoi_test("+123", 123);
	atoi_test("2147483647", 2147483647);
	atoi_test("-2147483648", -2147483648);
	atoi_test("2147483648", -2147483648);
	atoi_test("-2147483649", 2147483647);
	atoi_test("123\0456", 123);
	atoi_test("--123", 0);
	atoi_test("++123", 0);
	return ;
}
