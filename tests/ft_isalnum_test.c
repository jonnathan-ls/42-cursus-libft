#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(int value)
{
    int result = ft_isalnum(value);
    int expected = isalnum(value);

    if ((result > 0 && expected == 0) || (result == 0 && expected > 0))
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with value %d ", value);
        printf("=> ft_isalnum is %d and isalnum is %d\n", result, expected);
    }
}

void ft_isalnum_test(void)
{
    for (int i = 0-128; i <= 255; i++)
        run_test_case(i);
    run_test_case('\t');
    run_test_case('\x1B');
    run_test_case(-42);

    if (all_tests_passed)
        printf("\t✅ ft_isalnum\n");
}