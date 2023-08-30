#include "s21_smart_calc_tests.h"

START_TEST(test_one) {
  char answer[64] = "-30.0721649";
  const char math_expression[1000] =
      "15/(7-(1+1))*3-(2+(1+1))*15/(7-(200+1))3-(2+(1+1))(15/"
      "(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1)))";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_two) {
  char answer[64] = "-11711.7694905";
  const char math_expression[1000] =
      "1+2-3/4*5^6+sin3.1415927+cos(3.1415927/"
      "2)+sqrt2+2mod2+tan1+ln2+log10+asin0.3+acos0.1+atan0.6+-2+(1-+2)";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

Suite *suite_smart_calc_gather_test(void) {
  Suite *s = suite_create("suite_smart_calc_gather_test");
  TCase *tc = tcase_create("case_mart_calc_gather_test");

  tcase_add_test(tc, test_one);
  tcase_add_test(tc, test_two);

  suite_add_tcase(s, tc);
  return s;
}
