// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_bzerotest.c                                     :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/10/08 19:56:49 by jlacerda          #+#    #+#             */
// /*   Updated: 2024/10/16 20:25:46 by jlacerda         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "test.h"


// static bool	all_tests_passed = true;

// static void run_test_case(void *s, size_t n)
// {
// 	char	*result;
// 	char	*expected;

// 	ft_bzero(s, n);
// 	result = (char *)s;
// 	expected = (char *)calloc(n, sizeof(char));
// 	if (memcmp(result, expected, n) != 0)
// 	{
// 		all_tests_passed = false;
// 		printf("\t🔴 Test failed with value %p & %zu ", s, n);
// 		printf("=> ft_bzero: %s & bzero: %s\n", result, expected);
// 	}
// 	free(expected);
// }

// void	ft_bzero_test()
// {
// 	char	*s = "Maria";
// 	size_t n = 12;

// 	run_test_case(s, n);
// 	if (all_tests_passed)
// 		printf("\t✅ all tests passed for ft_bzero\n");
// }
