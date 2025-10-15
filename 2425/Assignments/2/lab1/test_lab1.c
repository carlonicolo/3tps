#include <check.h>
#include "lab1.h"

START_TEST(test_somma) {
    ck_assert_int_eq(somma(2, 3), 5);
    ck_assert_int_eq(somma(-1, 1), 0);
    ck_assert_int_eq(somma(10, 4), 14);
}
END_TEST

START_TEST(test_greeting) {
    char input[100] = "Hello";
    char expected_output[] = "Hello!!!";

    // Call the function
    char *result = getGreeting(input);

    // Check if the result matches the expected output
    ck_assert_str_eq(result, expected_output);

    // Verify that the original input string is also modified as expected
    ck_assert_str_eq(input, expected_output);
}
END_TEST
/*
START_TEST(test_mult) {
    ck_assert_int_eq(mult(5, 3), 15);
    ck_assert_int_eq(mult(0, 1), 0);
}
END_TEST
*/

Suite *math_utils_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("Lab1");

    /* Core test case */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_somma);
    tcase_add_test(tc_core, test_greeting);
    //tcase_add_test(tc_core, test_mult);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = math_utils_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? 0 : 1;
}
