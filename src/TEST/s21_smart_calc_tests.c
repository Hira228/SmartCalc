#include "s21_smart_calc_tests.h"

void run_tests(void) {
  Suite *list_cases[] =
  {
    suite_smart_calc_parsing_str(),
    suite_smart_calc_plus(),
    suite_smart_calc_minus(),
    suite_smart_calc_multi(),
    suite_smart_calc_div(),
    suite_smart_calc_with_prnts(),
    suite_smart_calc_pow(),
    suite_smart_calc_sin(),
    suite_smart_calc_cos(),
    suite_smart_calc_mod(),
    suite_smart_calc_sqrt(),
    suite_smart_calc_tan(),
    suite_smart_calc_ln(),
    suite_smart_calc_log(),
    suite_smart_calc_asin(),
    suite_smart_calc_acos(),
    suite_smart_calc_atan(),
    suite_smart_calc_unary_minus(),
    suite_smart_calc_unary_plus(),
    suite_smart_calc_gather_test(),
    suite_smart_calc_parsing_str(),
    NULL
  };

  for (Suite **current_testcase = list_cases; *current_testcase != NULL;
       current_testcase++) {
    run_testcase(*current_testcase);
  }
}

void run_testcase(Suite *testcase) {
  static int counter_testcase = 1;

  if (counter_testcase > 0) putchar('\n');
  counter_testcase++;
  SRunner *sr = srunner_create(testcase);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

int main()
{
  run_tests();
  return 0;
}