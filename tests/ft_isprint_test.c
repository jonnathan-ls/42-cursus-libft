#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(int value)
{
    int result = ft_isprint(value);
    int expected = isprint(value);
    if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with value %d => ft_isprint is %d and isprint is %d\n", value, result, expected);
    }
}

void ft_isprint_test(void)
{
    for (int i = -128; i <= 255; i++)
        run_test_case(i);
    
    if (all_tests_passed)
        printf("\t✅ ft_isprint\n");
}