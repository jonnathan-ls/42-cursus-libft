#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(void *dest, const void *src, size_t n)
{
 void *ft_result = ft_memcpy(dest, src, n);
 void *std_result = memcpy(dest, src, n);

 if (memcmp(ft_result, std_result, n) != 0)
 {
		all_tests_passed = false;
		printf("\t🔴 Test failed with dest: %p, src: %p, n: %zu\n", dest, src, n);
		printf("\t   ft_memcpy result: %p, expected: %p\n", ft_result, std_result);
 }
}

void ft_memcpy_test(void)
{
 char dest[6] = {0};
 char src[] = {0, 1, 2, 3, 4, 5};

 // Teste com n = 0
 run_test_case(dest, src, 0);

 // Teste com valor mínimo (0)
 memset(dest, 0, 6);
 run_test_case(dest, src, 1);

 // Teste com valor máximo (255)
 memset(dest, 255, 6);
 run_test_case(dest, src, 6);

 // Teste com NULL
 run_test_case(NULL, NULL, 0);

 // Teste com strings vazias
 char empty_dest[1] = "";
 char empty_src[1] = "";
 run_test_case(empty_dest, empty_src, 1);

 // Teste com strings iguais
 run_test_case(dest, src, 6);

 if (all_tests_passed)
		printf("\t✅ ft_memcpy\n");
}