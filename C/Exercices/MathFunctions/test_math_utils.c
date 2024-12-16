#include <check.h>
#include "math_utils.h"

// Test for sum function
START_TEST(test_sum) {
    ck_assert_int_eq(sum(2, 3), 5);
    ck_assert_int_eq(sum(-1, -1), -2);
    ck_assert_int_eq(sum(0, 0), 0);
}
END_TEST

// Test for subtract function
START_TEST(test_subtract) {
    ck_assert_int_eq(subtract(5, 3), 2);
    ck_assert_int_eq(subtract(0, 3), -3);
    ck_assert_int_eq(subtract(-1, -1), 0);
}
END_TEST

// Suite setup
Suite *math_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("Math");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_sum);
    tcase_add_test(tc_core, test_subtract);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = math_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? 0 : 1;
}
