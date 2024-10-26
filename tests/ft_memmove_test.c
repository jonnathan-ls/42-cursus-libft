#include "test.h"

struct test_case
{
 const char *description;
 const char *src;
 char *dest;
 size_t n;
};

static bool all_tests_passed = true;

static void run_test_case(struct test_case tc)
{
 char *ft_result = ft_memmove(tc.dest, tc.src, tc.n);
 char *std_result = memmove(tc.dest, tc.src, tc.n);

 if (strcmp(ft_result, std_result) != 0)
 {
		all_tests_passed	= false;
		printf("\t🔴 Test '%s' failed: ft_memmove: '%s' & memmove: '%s'\n", tc.description, ft_result, std_result);
 }
}

void ft_memmove_test(void)
{
 char dest1[] = "";
 char dest4[] = "b";
 char dest6[] = "destination";
 char dest7[] = "destination";
 char dest8[] = "12345";
 char dest9[] = "12345";

 struct test_case cases[] = {
		{"Empty Source and Destination", "", dest1, 0},
		// {"Null Source Destination", NULL, "destination", 0},
		// {"Null Destination", "source", NULL, 0},
		// {"Maximum Value", "source", dest5, SIZE_MAX},
		{"Minimum Value", "a", dest4, 1},
		{"Empty String", "", dest6, 10},
		{"Normal Case", "source", dest7, 7},
		{"Overlap Source Before Destination", dest8, dest8 + 2, 3},
		{"Overlap Destination Before Source", dest9 + 2, dest9, 3},
 };

 for (size_t i = 0; i < sizeof(cases) / sizeof(cases[0]); i++)
 {
		run_test_case(cases[i]);
 }

	if (all_tests_passed)
		printf("\t✅ ft_atoi\n");
}