#include "test.h"

static bool all_tests_passed = true;

static char sample_function(unsigned int i, char c)
{
 return c + i;
}

static void run_test_case(const char *s)
{
 char *ft_result = ft_strmapi(s, sample_function);
 // Implementar a lógica de verificação aqui

 free(ft_result);
}

void ft_strmapi_test(void)
{
 const char *test_cases[] = {"hello", "world", "", "42", "libft"};
 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
		run_test_case(test_cases[i]);
 }

 if (all_tests_passed)
		printf("\t✅ ft_strmapi\n");
}
