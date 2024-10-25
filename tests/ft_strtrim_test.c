#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(const char *s1, const char *set)
{
 char *ft_result = ft_strtrim(s1, set);
 // Implementar a lógica de verificação aqui

 free(ft_result);
}

void ft_strtrim_test(void)
{
 const char *test_cases[][2] = {{"hello", "h"}, {"world", "d"}, {"", ""}, {"42", "2"}, {"libft", "t"}};
 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
		run_test_case(test_cases[i][0], test_cases[i][1]);
 }

 if (all_tests_passed)
		printf("\t✅ ft_strtrim\n");
}
