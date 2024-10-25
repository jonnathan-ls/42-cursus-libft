/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
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
    int result = ft_isprint(value);
    int expected = isprint(value);
    if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with value %d => ft_isprint is %d and isprint is %d\n", value, result, expected);
    }
}

void ft_isprint_test(void)
{
    for (int i = -128; i <= 255; i++)
        run_test_case(i);
    
    if (all_tests_passed)
        printf("\t✅ ft_isprint\n");
}