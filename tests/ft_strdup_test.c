#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(const char *str)
{
 char *ft_result = ft_strdup(str);
 char *std_result = strdup(str);

 if ((ft_result == NULL && std_result != NULL) || (ft_result != NULL && std_result == NULL) || (ft_result && std_result && strcmp(ft_result, std_result) != 0))
 {
		all_tests_passed = false;
		printf("\t🔴 Value: '%s' ", str);
		printf("=> ft_strdup: %s & strdup: %s\n", ft_result, std_result);
 }

 free(ft_result);
 free(std_result);
}

void ft_strdup_test(void)
{
 const char *test_cases[] = {
		"Hello, World!",
		"",
		"42",
		"   -42",
		"A very long string to test the strdup function with a lot of characters to ensure it works correctly.",
	};

 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
		run_test_case(test_cases[i]);
 }

 if (all_tests_passed)
		printf("\t✅ ft_strdup\n");
}