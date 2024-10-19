/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strncmp.test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:10:11 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/11 23:23:58 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static bool	all_tests_passed = true;

static void	run_test_case(char *str1, char *str2, int n)
{
	int		result;
	int		expected;

	result = ft_strncmp(str1, str2, n);
	expected = strncmp(str1, str2, n);
	if (result != expected)
	{
		all_tests_passed = false;
		printf("\t🔴 [FT_STRNCMP]: ");
		printf("Test failed with value %s & %s & %i ", str1, str2, n);
		printf("=> ft_strncmp: %d & strncmp: %d\n", result, expected);
	}
}

void	ft_strncmp_test(void)
{
	all_tests_passed = true;
	run_test_case("Hello", "Hello", 5);
	run_test_case("Hello", "Hello", 42);
	run_test_case("Hello", "World", 3);
	run_test_case("Hello", "Hell", 99);
	run_test_case("Hello", "Hello", 0);
	run_test_case("Hello", "", 7);
	run_test_case("", "Hello", 3);
	run_test_case("Hello", "Hello", -42);
	run_test_case("", "", 0);
	run_test_case("", "", 10);
	if (all_tests_passed)
		printf("\t✅ all tests passed for ft_strncmp\n");
}
