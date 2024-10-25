#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(const char *s1, const char *s2)
{
 char *ft_result = ft_strjoin(s1, s2);
 size_t len1 = strlen(s1);
 size_t len2 = strlen(s2);
 char *std_result = malloc(len1 + len2 + 1);
 strcpy(std_result, s1);
 strcat(std_result, s2);

 if (strcmp(ft_result, std_result) != 0)
 {
		all_tests_passed = false;
		printf("\t🔴 Strings: '%s' & '%s' => ft_strjoin: '%s' & expected: '%s'\n", s1, s2, ft_result, std_result);
 }

 free(ft_result);
 free(std_result);
}

void ft_strjoin_test(void)
{
 const char *test_cases[][2] = {{"hello", "world"}, {"", ""}, {"42", "42"}, {"libft", "test"}};
 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
		run_test_case(test_cases[i][0], test_cases[i][1]);
 }

 if (all_tests_passed)
		printf("\t✅ ft_strjoin\n");
}
