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
#include <ctype.h>

int	ft_isalpha(int c);

void	ft_isalpha_test(void)
{
	int		i;
	int		result;
	int		expected;
	bool	all_tests_passed;

	i = 0;
	all_tests_passed = true;
	while (i <= 127)
	{
		result = ft_isalpha(i);
		expected = isalpha(i);
		if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
		{
			all_tests_passed = false;
			printf("\t🔴 Test failed with value %d ", i);
			printf("=> ft_isalpha is %d and isalpha is %d\n", result, expected);
		}
		i++;
	}
	result = ft_isalpha('\t');
	expected = isalpha('\t');
	if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
	{
		all_tests_passed = false;
		printf("\t🔴 Test failed with value \\t ");
		printf("=> ft_isalpha is %d and isalpha is %d\n", result, expected);
	}
	result = ft_isalpha('\x1B');
	expected = isalpha('\x1B');
	if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
	{
		all_tests_passed = false;
		printf("\t🔴 Test failed with value \\x1B ");
		printf("=> ft_isalpha is %d and isalpha is %d\n", result, expected);
	}
	if (all_tests_passed)
		printf("\t✅ all tests passed for ft_isalpha\n");
}
