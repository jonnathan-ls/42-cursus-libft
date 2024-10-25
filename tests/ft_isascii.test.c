/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:00:00 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/21 21:30:00 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(int value)
{
    int result = ft_isascii(value);
    int expected = isascii(value);
    if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with value %d => ft_isascii is %d and isascii is %d\n", value, result, expected);
    }
}

void ft_isascii_test(void)
{
    for (int i = -128; i <= 255; i++)
        run_test_case(i);

    run_test_case(INT_MIN);
    run_test_case(INT_MAX);
    
    if (all_tests_passed)
        printf("\t✅ ft_isascii\n");
}