#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(const char *str)
{
 int ft_result = ft_atoi(str);
 int std_result = atoi(str);

 if (ft_result != std_result)
 {
		all_tests_passed = false;
		printf("\t🔴 Value: '%s' => ft_atoi: %d & atoi: %d\n", str, ft_result, std_result);
 }
}

void ft_atoi_test(void)
{
 const char *test_cases[] = {"42", " -42", "4193 with words", "words and 987", "-91283472332", "+123", "0", " +0", "2147483647", "-2147483648"};
 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
		run_test_case(test_cases[i]);
 }

 if (all_tests_passed)
		printf("\t✅ ft_atoi\n");
}
