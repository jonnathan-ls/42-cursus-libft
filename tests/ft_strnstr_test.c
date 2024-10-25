#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(const char *haystack, const char *needle, size_t len)
{
 char *ft_result = ft_strnstr(haystack, needle, len);
 char *std_result = strnstr(haystack, needle, len);

 if (ft_result != std_result)
 {
		all_tests_passed = false;
		printf("\t🔴 Haystack: '%s', Needle: '%s', len: %zu => ft_strnstr: %p & strnstr: %p\n", haystack, needle, len, ft_result, std_result);
 }
}

void ft_strnstr_test(void)
{
 const char *test_cases[][2] = {{"hello", "lo"}, {"world", "or"}, {"", ""}, {"42", "2"}, {"libft", "ft"}};
 const size_t lengths[] = {0, 1, 2, 3, 4, 5, 6};
 size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);
 size_t num_lengths = sizeof(lengths) / sizeof(lengths[0]);

 for (size_t i = 0; i < num_test_cases; ++i)
 {
		for (size_t j = 0; j < num_lengths; ++j)
		{
			run_test_case(test_cases[i][0], test_cases[i][1], lengths[j]);
		}
 }

 if (all_tests_passed)
		printf("\t✅ ft_strnstr\n");
}