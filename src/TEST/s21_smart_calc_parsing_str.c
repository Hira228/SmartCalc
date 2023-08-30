#include "s21_smart_calc_tests.h"

START_TEST(test_one) {
  char answer[64] = "FAIL";
  const char math_expression[100] = "2+";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_two) {
  char answer[64] = "6.0000000";
  const char math_expression[100] = "2(3)";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_three) {
  char answer[64] = "9.0000000";
  const char math_expression[100] = "(1+2)(1 + 2)";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_four) {
  char answer[64] = "9.0000000";
  const char math_expression[100] = "(1+2)3";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_five) {
  char answer[64] = "0.0000000";
  const char math_expression[100] = "2sin3.1415927";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_six) {
  char answer[64] = "2.0000000";
  const char math_expression[100] = "2/+1";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_seven) {
  char answer[64] = "3.0000000";
  const char math_expression[100] = "+1+2";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_eight) {
  char answer[64] = "3.0000000";
  const char math_expression[100] = "(+2+1)";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_nine) {
  char answer[64] = "-1.0000000";
  const char math_expression[100] = "(-2 + 1)";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_ten) {
  char answer[64] = "-1.0000000";
  const char math_expression[100] = "-2 + 1";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_eleven) {
  char answer[64] = "FAIL";
  const char math_expression[100] = "1+DSD";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_twelve) {
  char answer[64] = "FAIL";
  const char math_expression[100] = "1+(2))";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_thirteen) {
  char answer[64] = "FAIL";
  const char math_expression[100] = "aco2";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_fourteen) {
  char answer[64] = "FAIL";
  const char math_expression[100] = "asi2";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_fifteen) {
  char answer[64] = "FAIL";
  const char math_expression[100] = "ata2";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_sixteen) {
  char answer[64] = "FAIL";
  const char math_expression[100] = "2mo2";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_seventeen) {
  char answer[64] = "FAIL";
  const char math_expression[100] = "co2";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_eighteen) {
  char answer[64] = "FAIL";
  const char math_expression[100] = "si2";
  char *result = malloc(50 * sizeof(char));
  result = execution(math_expression);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

START_TEST(test_nineteen) {
  char answer[64] = "(2.0000000)+(2.0000000)";
  double x = 2;
  const char math_expression[100] = "x+x";
  char *result = malloc(50 * sizeof(char));
  result = str_with_graph(math_expression, x);

  ck_assert_str_eq(answer, result);

  free(result);
}
END_TEST

Suite *suite_smart_calc_parsing_str(void) {
  Suite *s = suite_create("suite_smart_calc_parsing_str");
  TCase *tc = tcase_create("case_mart_calc_parsing_str");

  tcase_add_test(tc, test_one);
  tcase_add_test(tc, test_two);
  tcase_add_test(tc, test_three);
  tcase_add_test(tc, test_four);
  tcase_add_test(tc, test_five);
  tcase_add_test(tc, test_six);
  tcase_add_test(tc, test_seven);
  tcase_add_test(tc, test_eight);
  tcase_add_test(tc, test_nine);
  tcase_add_test(tc, test_ten);
  tcase_add_test(tc, test_eleven);
  tcase_add_test(tc, test_twelve);
  tcase_add_test(tc, test_thirteen);
  tcase_add_test(tc, test_fourteen);
  tcase_add_test(tc, test_fifteen);
  tcase_add_test(tc, test_sixteen);
  tcase_add_test(tc, test_seventeen);
  tcase_add_test(tc, test_eighteen);
  tcase_add_test(tc, test_nineteen);

  suite_add_tcase(s, tc);
  return s;
}
