/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:56:49 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/20 20:25:46 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(const char *str)
{
    int ft_result = ft_atoi(str);
    int std_result = atoi(str);

    if (ft_result != std_result)
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with input '%s' ", str);
        printf("=> ft_atoi: %d & atoi: %d\n", ft_result, std_result);
    }
}

void ft_atoi_test(void)
{
    run_test_case("42");
    run_test_case("   -42");
    run_test_case("4193 with words");
    run_test_case("words and 987");
    run_test_case("-91283472332");
    run_test_case("+123");
    run_test_case("0");
    run_test_case("   +0");
    run_test_case("2147483647");
    run_test_case("-2147483648");

    if (all_tests_passed)
        printf("\t✅ all tests passed for ft_atoi\n");
}