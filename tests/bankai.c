/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bankai.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:46:38 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/14 18:44:41 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bankai.h"

t_test_suite *g_suites = NULL;

void	describe(const char *description)
{
	t_test_suite	*suite;

	suite = (t_test_suite *)malloc(sizeof(t_test_suite));
	suite->description = strdup(description);
	suite->tests = NULL;
	suite->before = NULL;
	suite->after = NULL;
	suite->all_tests_passed = true;
	suite->next = g_suites;
	g_suites = suite;
}

void	it(const char *description, t_test_fn func)
{
	t_test_case	*test;

	test = (t_test_case *)malloc(sizeof(t_test_case));
	test->description = strdup(description);
	test->func = func;
	test->next = g_suites->tests;
	g_suites->tests = test;
}

void	before(t_test_fn func)
{
	g_suites->before = func;
}

void	after(t_test_fn func)
{
	g_suites->after = func;
}

void	expect(int condition, const char *message)
{
	if (!condition)
	{
		g_suites->all_tests_passed = false;
		printf("\t\t\t🔴 Assertion failed: %s\n", message);
	}
}

void	run_tests(void)
{
	t_test_suite	*suite;

	suite = g_suites;
	while (suite)
	{
		printf("\n\t🔥 Suite: %s\n", suite->description);
		if (suite->before)
			suite->before();
		t_test_case *test = suite->tests;
		while (test) {
			printf("\t   🧪 Test: %s\n", test->description);
			test->func();
			test = test->next;
		}
		if (suite->all_tests_passed)
			printf("\t✅ all tests passed for %s\n", suite->description);
		else
			printf("\n\t🚨 some tests failed for %s\n", suite->description);
		if (suite->after)
			suite->after();
		suite = suite->next;
	}
}



void	setup_string_tests2()
{
	printf("\tSetup for string tests\n");
}

void	teardown_string_tests()
{
	printf("\tTeardown for string tests\n");
}

void	test_compare_strings()
{
	expect(strcmp("hello", "hello") == 0, "Strings are not equal");
}

void	test_find_substring()
{
	expect(strstr("hello world", "world") != NULL, "Substring not found");
}
void	setup_string_tests()
{
	it("should compare strings correctly", test_compare_strings);
	it("should find substring", test_find_substring);
}

void noop() {}

void	example_tests()
{
	printf("\n🔍 Running test suit ... \n");
	describe("String tests");
	it("should compare strings correctly", test_compare_strings);
	it("should find substring", test_find_substring);

	describe("String tests");
	it("should compare strings correctly", test_compare_strings);
	it("should find substring", test_find_substring);
}

int	main(void)
{
	example_tests();
	run_tests();
	printf("\n");
	return (0);
}
