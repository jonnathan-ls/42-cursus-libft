/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:10:11 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/14 19:14:07 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static bool	all_tests_passed = true;

static void run_test_case(int value)
{
	int		result;
	int		expected;

	result = ft_isalpha(value);
	expected = isalpha(value);
	if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
	{
		all_tests_passed = false;
		printf("\t🔴 Test failed with value %d ", value);
		printf("=> ft_isalpha is %d and isalpha is %d\n", result, expected);
	}
}

void	ft_isalpha_test(void)
{
	for (int i = 0; i <= 127; i++)
		run_test_case(i++);
	run_test_case('\t');
	run_test_case('\x1B');
	run_test_case(-42);
	run_test_case(4242);
	if (all_tests_passed)
		printf("\t✅ all tests passed for ft_isalpha\n");
}
