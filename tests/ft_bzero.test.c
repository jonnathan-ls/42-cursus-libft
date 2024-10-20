/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzerotest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:56:49 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/16 20:25:46 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static bool all_tests_passed = true;

void run_test_case(char *s, size_t n)
{
    size_t s_size = strlen(s) + 1; // +1 para o terminador nulo
    char *s_value = (char *)calloc(s_size, sizeof(char));
    strncpy(s_value, s, s_size);

    char *result = s_value;
    ft_bzero(result, n);

    char *expected = (char *)calloc(s_size, sizeof(char));
    strncpy(expected, s, s_size);
    bzero(expected, n);

    if (memcmp(result, expected, n) != 0)
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with value '%s' & %zu ", s, n);
        printf("=> ft_bzero: '%s' & bzero: '%s'\n", result, expected);
    }

    free(s_value);
    free(expected);
}

void ft_bzero_test(void)
{
    char s1[] = "test string 1";
    char s2[] = "another test string";
    char s3[] = "yet another test";

    run_test_case(s1, strlen(s1));
    run_test_case(s2, 3);
    run_test_case(s3, 0);

    if (all_tests_passed)
        printf("\t✅ all tests passed for ft_bzero\n");
}