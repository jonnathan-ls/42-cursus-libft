/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:45:00 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/21 22:00:00 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(const char *str, int c)
{
 const char *ft_result = NULL;
 const char *std_result = NULL;

	ft_result = strchr(str, c);
	std_result = strchr(str, c);


 if (ft_result != std_result)
 {
		all_tests_passed = false;
		printf("\t🔴 Value: '%s', Char: '%c' ", str ? str : "NULL", c);
		printf("=> ft_strchr: %p & strchr: %p\n", ft_result, std_result);
 }
}

void ft_strchr_test(void)
{
	const struct {
		const char *str;
		int c;
	} test_cases[] = {
		{"hello", 'e'},
		{"hello", 'h'},
		{"hello", 'o'},
		{"hello", 'x'},
		{"hellox", 'x'},
		{"", 'x'},
		{"", '\0'},
		{"", ' '},
		{"hello", '\0'},
		{"\0", '\0'}
	};

 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
	run_test_case(test_cases[i].str, test_cases[i].c);
 }

 if (all_tests_passed)
	printf("\t✅ ft_strchr\n");
}