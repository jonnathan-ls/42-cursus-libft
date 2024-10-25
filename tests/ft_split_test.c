/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:45:00 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/21 22:00:00 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static bool all_tests_passed = true;

static void run_test_case(int test_num, const char *str, char c, const char **expected)
{
 char **ft_result = ft_split(str, c);
 char **std_result = (char **)expected;

 if (!ft_result || !std_result)
 {
		if (ft_result != std_result)
		{
			all_tests_passed = false;
			printf("\t🔴 Test %d failed with str: '%s', c: '%c'\n", test_num, str, c);
			printf("\t   ft_split result: %p, expected: %p\n", ft_result, std_result);
		}
		return;
 }

 int i = 0;
 while (ft_result[i] && std_result[i])
 {
		if (strcmp(ft_result[i], std_result[i]) != 0)
		{
			all_tests_passed = false;
			printf("\t🔴 Test %d failed with str: '%s', c: '%c'\n", test_num, str, c);
			printf("\t   ft_split result: '%s', expected: '%s'\n", ft_result[i], std_result[i]);
		}
		i++;
 }

 if (ft_result[i] != NULL || std_result[i] != NULL)
 {
		all_tests_passed = false;
		printf("\t🔴 Test %d failed with str: '%s', c: '%c'\n", test_num, str, c);
		printf("\t   ft_split result length: %d, expected length: %d\n", i, i);
 }

 i = 0;
 while (ft_result[i])
 {
		free(ft_result[i]);
		i++;
 }
 free(ft_result);
}

struct test_case
{
 const char *str;
 char c;
 const char **expected;
};

void ft_split_test(void)
{
 const struct test_case test_cases[] = {
		{"Hello world", ' ', (const char *[]){"Hello", "world", NULL}},
		{"foo,bar,baz", ',', (const char *[]){"foo", "bar", "baz", NULL}},
		{"split this string", ' ', (const char *[]){"split", "this", "string", NULL}},
		{"", ' ', (const char *[]){NULL}},
		{NULL, ' ', NULL},
		{"one\ttwo\tthree", '\t', (const char *[]){"one", "two", "three", NULL}},
		{"line1\nline2\nline3", '\n', (const char *[]){"line1", "line2", "line3", NULL}},
		{"abc\0def\0ghi", '\0', (const char *[]){"abc", NULL}},
		{"start middle end", ' ', (const char *[]){"start", "middle", "end", NULL}},
		{"first,second,third", ',', (const char *[]){"first", "second", "third", NULL}}
	};

 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
		run_test_case(i + 1, test_cases[i].str, test_cases[i].c, test_cases[i].expected);
 }

 if (all_tests_passed)
		printf("\t✅ ft_split\n");
}