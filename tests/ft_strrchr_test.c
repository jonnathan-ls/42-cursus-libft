#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(const char *s, int c)
{
 char *ft_result = ft_strrchr(s, c);
 char *std_result = strrchr(s, c);

 if (ft_result != std_result)
 {
		all_tests_passed = false;
		printf("\t🔴 String: '%s', Char: '%c' => ft_strrchr: %p & strrchr: %p\n", s, c, ft_result, std_result);
 }
}

void ft_strrchr_test(void)
{
 const char *test_cases[] = {"hello", "world", "", "42", "libft"};
 const int chars[] = {'h', 'o', 'z', '4', 'f', '\0'};
 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);
 size_t num_chars = sizeof(chars) / sizeof(chars[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
		for (size_t j = 0; j < num_chars; ++j)
		{
			run_test_case(test_cases[i], chars[j]);
		}
 }

 if (all_tests_passed)
		printf("\t✅ ft_strrchr\n");
}