/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:10:11 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/11 22:36:42 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static bool	all_tests_passed = true;

static void run_test_case(int value)
{
	int		result = ft_isdigit(value);
	int		expected = isdigit(value);

	if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
	{
		all_tests_passed = false;
		printf("\t🔴 Test failed with value %d ", value);
		printf("=> ft_isdigit is %d and isdigit is %d\n", result, expected);
	}
}

void	ft_isdigit_test(void)
{
	for (int i = 0; i <= 127; i++)
		run_test_case(i++);
	run_test_case('\t');
	run_test_case('\x1B');
	run_test_case(-42);
	run_test_case(4242);
	if (all_tests_passed)
		printf("\t✅ ft_isdigit\n");
}
