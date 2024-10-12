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
#include <ctype.h>

int	ft_isdigit(int c);

void	ft_isdigit_test(void)
{
	int		i;
	int		result;
	int		expected;
	bool	all_tests_passed;

	i = 0;
	all_tests_passed = true;
	while (i <= 127)
	{
		result = ft_isdigit(i);
		expected = isdigit(i);
		if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
		{
			all_tests_passed = false;
			printf("\t🔴 Test failed with value %d ", i);
			printf("=> ft_isdigit is %d and isdigit is %d\n", result, expected);
		}
		i++;
	}
	if (all_tests_passed)
		printf("\t✅ all tests passed for ft_isdigit\n");
}
