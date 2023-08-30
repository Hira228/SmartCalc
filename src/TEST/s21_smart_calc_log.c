#include "s21_smart_calc_tests.h"

START_TEST(test_one) {
  char answer[64] = "1.0000000";
  const char math_expression[100] = "log10";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_two) {
  char answer[64] = "1.2304489";
  const char math_expression[100] = "log17";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

Suite *suite_smart_calc_log(void) {
  Suite *s = suite_create("suite_smart_calc_log");
  TCase *tc = tcase_create("case_mart_calc_log");

  tcase_add_test(tc, test_one);
  tcase_add_test(tc, test_two);

  suite_add_tcase(s, tc);
  return s;
}
