/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:20:52 by vboxuser          #+#    #+#             */
/*   Updated: 2025/01/16 15:31:12 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include <stdio.h>
# include "../libft.h"

void	perform_test(const char *test_name, const void *a, const void *b, int (*cmp_fun)(const void *a, const void *b));
void	test_ft_atoi(void);
void	test_ft_bzero(void);
void	test_ft_calloc(void);
void	test_ft_isalnum(void);
void	test_ft_isalpha(void);
void	test_ft_isascii(void);
void	test_ft_isdigit(void);
void	test_ft_memchr(void);
void	test_ft_memcmp(void);
void	test_ft_memcpy(void);
void	test_ft_memmove(void);
void	test_ft_memset(void);
void	test_ft_strchr(void);
void	test_ft_strdup(void);
void	test_ft_strlcat(void);
void	test_ft_strlcpy(void);
void	test_ft_strlen(void);
void	test_ft_strncmp(void);
void	test_ft_strnstr(void);
void	test_ft_strrchr(void);
void	test_ft_tolower(void);
void	test_ft_toupper(void);

#endif