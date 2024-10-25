/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:00:00 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/20 21:30:00 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(size_t nmemb, size_t size)
{
    void *ft_result = ft_calloc(nmemb, size);
    void *std_result = calloc(nmemb, size);

    if ((ft_result == NULL && std_result != NULL) || (ft_result != NULL && std_result == NULL) || (ft_result && std_result && memcmp(ft_result, std_result, nmemb * size) != 0))
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with nmemb: %zu, size: %zu\n", nmemb, size);
        printf("\t   ft_calloc result: %p\n", ft_result);
        printf("\t   calloc result: %p\n", std_result);
    }

    free(ft_result);
    free(std_result);
}

void ft_calloc_test(void)
{
    run_test_case(0, 0);
    run_test_case(1, 1);
    run_test_case(10, sizeof(int));
    run_test_case(100, sizeof(char));
    run_test_case(1000, sizeof(double));
    run_test_case(SIZE_MAX, 1); // Teste de limite superior
    run_test_case(1, SIZE_MAX); // Teste de limite superior

    if (all_tests_passed)
        printf("\t✅ ft_calloc\n");
}