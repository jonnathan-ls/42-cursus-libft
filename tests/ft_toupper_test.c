#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(int c)
{
 int ft_result = ft_toupper(c);
 int std_result = toupper(c);

 if (ft_result != std_result)
 {
		all_tests_passed = false;
		printf("\t🔴 Value: '%c' => ft_toupper: %d & toupper: %d\n", c, ft_result, std_result);
 }
}

void ft_toupper_test(void)
{
 const int test_cases[] = {'A', 'Z', 'a', 'z', '0', '9', '!', '@', ' ', 0, -1, 128, 255};
 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
		run_test_case(test_cases[i]);
 }

 if (all_tests_passed)
		printf("\t✅ ft_toupper\n");
}