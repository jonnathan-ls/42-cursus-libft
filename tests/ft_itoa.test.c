/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:00:00 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/21 21:30:00 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(int value, const char *expected)
{
    char *result = ft_itoa(value);
    if (result == NULL)
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with value %d => ft_itoa returned NULL\n", value);
        return;
    }
    if (strcmp(result, expected) != 0)
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with value %d => ft_itoa is %s and expected is %s\n", value, result, expected);
    }
    free(result);
}

void ft_itoa_test(void)
{
    run_test_case(0, "0");
    run_test_case(1, "1");
    run_test_case(-1, "-1");
    run_test_case(42, "42");
    run_test_case(-42, "-42");
    run_test_case(INT_MAX, "2147483647");
    run_test_case(INT_MIN, "-2147483648");

    if (all_tests_passed)
        printf("\t✅ ft_itoa\n");
}