/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:45:00 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/21 22:00:00 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"
static bool all_tests_passed = true;

static void run_test_case(void *b, int c, size_t len)
{
 void *ft_result = ft_memset(b, c, len);
 void *std_result = memset(b, c, len);
 if (memcmp(ft_result, std_result, len) != 0)
 {
		all_tests_passed = false;
		printf("\t🔴 Test failed with b: %p, c: %d, len: %zu\n", b, c, len);
		printf("\t   ft_memset result: %p, expected: %p\n", ft_result, std_result);
 }
}

void ft_memset_test(void)
{
 char b[6];

 // Teste com n = 0
 run_test_case(b, 0, 0);

 // Teste com valor mínimo (0)
 memset(b, 0, 6);
 run_test_case(b, 0, 6);

 // Teste com valor máximo (255)
 memset(b, 255, 6);
 run_test_case(b, 255, 6);

 // Teste com NULL
 run_test_case(NULL, 0, 0);

 // Teste com strings vazias
 char empty_b[1] = "";
 run_test_case(empty_b, 0, 1);

 if (all_tests_passed)
		printf("\t✅ ft_memset\n");
}