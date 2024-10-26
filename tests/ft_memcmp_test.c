#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(const void *s1, const void *s2, size_t n, int expected)
{
 int result = ft_memcmp(s1, s2, n);
 if (result != expected)
 {
		all_tests_passed = false;
		printf("\t🔴 Test failed with s1: %p, s2: %p, n: %zu\n", s1, s2, n);
		printf("\t   ft_memcmp result: %d, expected: %d\n", result, expected);
 }
}

void ft_memcmp_test(void)
{
 char s1[] = {0, 1, 2, 3, 4, 5};
 char s2[] = {0, 1, 2, 3, 4, 5};
 char s3[] = {0, 1, 2, 3, 4, 6};

 // Teste com n = 0
 run_test_case(s1, s2, 0, 0);

 // Teste com strings iguais
 run_test_case(s1, s2, 6, 0);

 // Teste com strings diferentes
 run_test_case(s1, s3, 6, s1[5] - s3[5]);

 // Teste com valor máximo (255)
 char s4[] = {255, 255, 255, 255, 255, 255};
 char s5[] = {255, 255, 255, 255, 255, 254};
 run_test_case(s4, s5, 6, s4[5] - s5[5]);

 // Teste com valor mínimo (0)
 char s6[] = {0, 0, 0, 0, 0, 0};
 char s7[] = {0, 0, 0, 0, 0, 1};
 run_test_case(s6, s7, 6, s6[5] - s7[5]);

 // Teste com NULL
 run_test_case(NULL, NULL, 0, 0);

 // Teste com strings vazias
 char s8[] = "";
 char s9[] = "";
 run_test_case(s8, s9, 1, 0);

 if (all_tests_passed)
		printf("\t✅ ft_memcmp\n");
}