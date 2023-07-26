#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

enum error
{
    SUCCESS = 0,
    FAILURE = 1,
};

enum type
{
    NUMBER         = 2,
    PLUS           = 3,
    MINUS          = 4,
    PRNTS_OPEN     = 5,
    PRNTS_CLOSE    = 6,
    MULTI          = 7,
    DIV            = 8,
    POW            = 9,
    SIN            = 10,
    COS            = 11,
    MOD            = 12,
    SQRT           = 13,
    TAN            = 14,
    LN             = 15,
    LOG            = 16,
    ASIN           = 17,
    ACOS           = 18,
    ATAN           = 19,
};

struct Data
{
    double value;
    int priority;
    int type;
    struct Data *next;
};

void new_parsing_str(char *str, char *new_str);
int lixem_parsing(struct Data **stack, char *str);
void push_back(struct Data **ptr, double Data, int type_t, int priority_t);
double pop_back_val(struct Data **ptr);
int pop_back_op(struct Data **ptr);
int element_definition(int c, char *str, int *i);
int number_entry(char *str, char *output_str, int *i);
int check_s_functions(char *str, int *i);
int check_mod_function(char *str, int *i);
int check_cos_function(char *str, int *i);
int check_tan_function(char *str, int *i);
int check_log_functions(char *str, int *i);
int check_a_functions(char *str, int *i);
void print_stack(struct Data *ptr);
int peek_stack_priority(struct Data *ptr);
int stack_is_empty(struct Data *ptr);