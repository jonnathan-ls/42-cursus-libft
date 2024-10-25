/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:45:00 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/21 22:00:00 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(const void *s, int c, size_t n, void *expected)
{
 void *result = ft_memchr(s, c, n);
 if (result != expected)
 {
		all_tests_passed = false;
		printf("\t🔴 Test failed with s: %p, c: %d, n: %zu\n", s, c, n);
		printf("\t   ft_memchr result: %p, expected: %p\n", result, expected);
 }
}

void ft_memchr_test(void)
{
 char s[] = {0, 1, 2, 3, 4, 5};

 // Teste com n = 0
 run_test_case(s, 0, 0, NULL);

 // Teste com valor encontrado no início
 run_test_case(s, 0, 1, s);

 // Teste com valor encontrado no meio
 run_test_case(s, 2, 3, s + 2);

 // Teste com valor não encontrado
 run_test_case(s, 6, 6, NULL);

 // Teste com valor máximo (255)
 run_test_case(s, 2 + 256, 3, s + 2); // Cast check

 // Teste com valor mínimo (0)
 run_test_case(s, 0, 6, s);

 if (all_tests_passed)
		printf("\t✅ ft_memchr\n");
}