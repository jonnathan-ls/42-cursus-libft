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

int	ft_strncmp(const char *s1, const char *s2, unsigned long n);

bool	exectute_test(char *str1, char *str2, unsigned long n)
{
	int		result;
	int		expected;
	bool	is_equal;

	result = strncmp(str1, str2, n);
	expected = ft_strncmp(str1, str2, n);
	is_equal = (result == expected);
	if (!is_equal)
	{
		printf("\t🔴 [FT_STRNCMP]: ");
		printf("Test failed with value %s & %s & %lu ", str1, str2, n);
		printf("=> ft_strncmp: %d & strncmp: %d\n", result, expected);
	}
	return (is_equal);
}

void	ft_strncmp_test(void)
{
	bool	all_tests_passed;

	all_tests_passed = true;
	if (!exectute_test("Hello", "Hello", 5))
		all_tests_passed = false;
	if (!exectute_test("Hello", "World", 3))
		all_tests_passed = false;
	if (!exectute_test("Hello", "Hell", 5))
		all_tests_passed = false;
	if (!exectute_test("Hello", "Hello", 0))
		all_tests_passed = false;
	if (!exectute_test("Hello", "", 7))
		all_tests_passed = false;
	if (!exectute_test("", "hELLO", 3))
		all_tests_passed = false;
	if (all_tests_passed)
		printf("\t✅ all tests passed for ft_strncmp\n");
}
