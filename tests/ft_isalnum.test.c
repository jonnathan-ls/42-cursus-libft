/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:00:00 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/21 10:30:00 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(int value)
{
    int result = ft_isalnum(value);
    int expected = isalnum(value);

    if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with value %d ", value);
        printf("=> ft_isalnum is %d and isalnum is %d\n", result, expected);
    }
}

void ft_isalnum_test(void)
{
    for (int i = 0; i <= 127; i++)
        run_test_case(i);
    run_test_case('\t');
    run_test_case('\x1B');
    run_test_case(-42);
    run_test_case(420);

    if (all_tests_passed)
        printf("\t✅ all tests passed for ft_isalnum\n");
}