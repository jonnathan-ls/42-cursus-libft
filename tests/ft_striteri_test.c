#include "test.h"

static bool all_tests_passed = true;

static void sample_function(unsigned int i, char *c)
{
 *c = *c + i;
}

static void run_test_case(char *s)
{
 char *ft_result = strdup(s);
 ft_striteri(ft_result, sample_function);
 // Implementar a lógica de verificação aqui

 free(ft_result);
}

void ft_striteri_test(void)
{
 char test_cases[][6] = {"hello", "world", "", "42", "libft"};
 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
		run_test_case(test_cases[i]);
 }

 if (all_tests_passed)
		printf("\t✅ ft_striteri\n");
}
