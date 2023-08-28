#ifndef SRC_S21_SMART_CALC_UNIT_TESTS_H_
#define SRC_S21_SMART_CALC_UNIT_TESTS_H_

#include <check.h>
#include <unistd.h>

#include "../s21_smart_calc.h"

Suite *suite_smart_calc_plus(void);
Suite *suite_smart_calc_minus(void);
Suite *suite_smart_calc_multi(void);
Suite *suite_smart_calc_div(void);
Suite *suite_smart_calc_with_prnts(void);
Suite *suite_smart_calc_pow(void);
Suite *suite_smart_calc_sin(void);
Suite *suite_smart_calc_cos(void);
Suite *suite_smart_calc_mod(void);
Suite *suite_smart_calc_sqrt(void);
Suite *suite_smart_calc_tan(void);
Suite *suite_smart_calc_ln(void);
Suite *suite_smart_calc_log(void);
Suite *suite_smart_calc_asin(void);
Suite *suite_smart_calc_acos(void);
Suite *suite_smart_calc_atan(void);
Suite *suite_smart_calc_unary_minus(void);
Suite *suite_smart_calc_unary_plus(void);
Suite *suite_smart_calc_gather_test(void);

Suite *suite_smart_calc_parsing_str(void);


void run_tests(void);
void run_testcase(Suite *testcase);
double get_rand(double min, double max);

#endif  // SRC_UNIT_TESTS_S21_SMART_CALC_H_
