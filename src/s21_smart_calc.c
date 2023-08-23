#include "s21_smart_calc.h"

// SUCCESS 0
// FAILURE 1

char *execution(const char *str)
{
    struct Data *stack = NULL;
    struct Data *reverse_stack = NULL;
    struct Data *stack_polish_notation = NULL;
    struct Data *stack_reverse_polish_notation = NULL;
    struct Data *stack_calc = NULL;
    char *str_res = malloc(sizeof(char) * 50);
    //char str[1000] = {0};
    char new_str[1000] = {0};
    //fgets(str, sizeof(str), stdin);                                                       // GET STRING WITH MATH EXPRESSION
    new_parsing_str(str, new_str);                                                          // PARSING STRING WITH MATH EXPRESSION
    printf("%s\n", new_str);

    int flag_error = lixem_parsing(&stack, new_str);                                        // PARSING LIXEMS

    if(flag_error == FAILURE)                                                               // CHECK ERRORS
    {
        flag_error_clear(&stack, &reverse_stack, &stack_polish_notation, &stack_reverse_polish_notation, &stack_calc);
        sprintf(str_res, "FAIL");
        return str_res;
    }
    reverse_stack_elements(&stack, &reverse_stack);                                         // REVERSE STACK

    flag_error = reverse_polish_notation(&reverse_stack, &stack_polish_notation);           // RPN

    if(flag_error == FAILURE)                                                               // CHECK ERRORS
    {
        flag_error_clear(&stack, &reverse_stack, &stack_polish_notation, &stack_reverse_polish_notation, &stack_calc);
        sprintf(str_res, "FAIL");
        return str_res;
    }

    reverse_stack_elements(&stack_polish_notation, &stack_reverse_polish_notation);          // REVERSE STACK

    flag_error = calculate(&stack_reverse_polish_notation, &stack_calc);                     // CALCULATE

    if(flag_error == FAILURE)                                                                // CHECK ERRORS
    {
        flag_error_clear(&stack, &reverse_stack, &stack_polish_notation, &stack_reverse_polish_notation, &stack_calc);
        sprintf(str_res, "FAIL");
        return str_res;
    }

    sprintf(str_res, "%.7lf", pop_back_val(&stack_calc));                                    // ANSWER
    return str_res;
}

int check_x_str(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'x')
        {
            return 1;
        }
    }
    return 0;
}

int calculate(struct Data **stack_reverse_polish_notation, struct Data **stack_calc)
{
    int flag_error = SUCCESS;

    while(!stack_is_empty(*stack_reverse_polish_notation) && flag_error == SUCCESS)
    {
        struct Data *temp_n = *stack_reverse_polish_notation;

        if(temp_n -> type == NUMBER) push_back(stack_calc, temp_n -> value, temp_n -> type, temp_n -> priority);
        else
        {
            double a = 0;
            if(!stack_is_empty(*stack_calc)) a = pop_back_val(stack_calc);

            else flag_error = FAILURE;

            switch (temp_n -> type)
            {
            case PLUS:
                if(stack_is_empty(*stack_calc)) flag_error = FAILURE;
                else push_back(stack_calc, a + pop_back_val(stack_calc), NUMBER, 0);
                break;

            case MINUS:
                if(stack_is_empty(*stack_calc)) flag_error = FAILURE;
                else push_back(stack_calc, pop_back_val(stack_calc) - a, NUMBER, 0);
                break;

            case MULTI:
                if(stack_is_empty(*stack_calc)) flag_error = FAILURE;
                else push_back(stack_calc, a * pop_back_val(stack_calc), NUMBER, 0);
                break;

            case DIV:
                if(stack_is_empty(*stack_calc) || a == 0.0f) flag_error = FAILURE;
                else push_back(stack_calc, pop_back_val(stack_calc) / a, NUMBER, 0);
                break;

            case POW:
                if(stack_is_empty(*stack_calc)) flag_error = FAILURE;
                else push_back(stack_calc, powl(pop_back_val(stack_calc), a), NUMBER, 0);
                break;

            case MOD:
                if(stack_is_empty(*stack_calc)) flag_error = FAILURE;
                else push_back(stack_calc, fmod(pop_back_val(stack_calc), a), NUMBER, 0);
                break;

            case SIN:
                if (flag_error == SUCCESS) push_back(stack_calc, sin(a), NUMBER, 0);
                break;

            case COS:
                if (flag_error == SUCCESS) push_back(stack_calc, cos(a), NUMBER, 0);
                break;

            case SQRT:
                if (flag_error != FAILURE && a >= 0.0f) push_back(stack_calc, sqrt(a), NUMBER, 0);
                else flag_error = FAILURE;
                break;

            case TAN:
                if (flag_error == SUCCESS) push_back(stack_calc, tan(a), NUMBER, 0);
                break;

            case LN:
                if (flag_error != FAILURE && a > 0.0f) push_back(stack_calc, log(a), NUMBER, 0);
                else flag_error = FAILURE;
                break;

            case LOG:
                if (flag_error != FAILURE && a > 0.0f) push_back(stack_calc, log10(a), NUMBER, 0);
                else flag_error = FAILURE;
                break;

            case ASIN:
                if (flag_error == SUCCESS) push_back(stack_calc, asin(a), NUMBER, 0);
                break;

            case ACOS:
                if (flag_error == SUCCESS) push_back(stack_calc, acos(a), NUMBER, 0);
                break;

            case ATAN:
                if (flag_error == SUCCESS) push_back(stack_calc, atan(a), NUMBER, 0);
                break;

            default:
                break;
            }
        }

        *stack_reverse_polish_notation = temp_n -> next;
        free(temp_n);
    }
    return flag_error;
}

char *str_with_graph(const char *str_with_x, double x)
{
    char *new_str = malloc(1000 * sizeof(char));
    char val[256] = {0};
    int index = 0;
    sprintf(val, "%.7lf", x);
    for(size_t i = 0; i < strlen(str_with_x); i++)
    {
        if(str_with_x[i] == 'x')
        {
            new_str[index++] = '(';
            for(int j = 0; val[j] != '\0'; j++)
            {
                new_str[index++] = val[j];
            }
            new_str[index++] = ')';
        }
        else
        {
            new_str[index++] = str_with_x[i];
        }
    }
    new_str[index] = '\0';
    return new_str;
}

void reverse_stack_elements(struct Data **stack, struct Data **reverse_stack)
{
    while (!stack_is_empty(*stack))
    {
        struct Data *temp = *stack;
        push_back(reverse_stack, temp->value, temp->type, temp->priority);
        *stack = temp->next;
        free(temp);
    }
}

int check_unary_minus(struct Data *ptr)
{
    struct Data *temp = NULL;
    if (!stack_is_empty(ptr))
        temp = ptr->next;

    if (temp != NULL && temp->type == MINUS && !stack_is_empty(temp))
    {
        struct Data *next_elem = temp->next;
        if (next_elem->type == NUMBER && !stack_is_empty(next_elem))
            return UNARY_MINUS;
        else if (next_elem->type == PRNTS_OPEN && !stack_is_empty(next_elem))
            return UNARY_PRNTS;
    }
    return SUCCESS;
}
int reverse_polish_notation(struct Data **reverse_stack, struct Data **stack_polish_notation)
{
    int flag_error = SUCCESS;
    int flag_unary = SUCCESS;
    struct Data *stack_operator = NULL;

    while(!stack_is_empty(*reverse_stack) && flag_error == SUCCESS)
    {
        if (flag_unary == UNARY_MINUS)
        {
            pop_back_op(reverse_stack);
        }

        struct Data *temp = *reverse_stack;

        if(temp -> type == NUMBER)
        {
            push_back(stack_polish_notation, (flag_unary == UNARY_MINUS ? (temp -> value) * (-1) : (temp -> value)), temp -> type, temp -> priority);

            if(flag_unary == UNARY_MINUS) flag_unary = SUCCESS;
        }

        else if(temp -> type != NUMBER && temp -> type != PRNTS_OPEN && temp -> type != PRNTS_CLOSE)
        {
            while(!stack_is_empty(stack_operator) && peek_stack_priority(stack_operator) >= temp -> priority && stack_operator -> type != PRNTS_OPEN)
            {
                struct Data *temp_op = stack_operator;
                push_back(stack_polish_notation, temp_op -> value, temp_op -> type, temp_op -> priority);
                stack_operator = temp_op -> next;
                free(temp_op);
            }

            push_back(&stack_operator, temp -> value, temp -> type, temp -> priority);

            flag_unary = check_unary_minus(temp);
            if (flag_unary == UNARY_PRNTS)
            {
                pop_back_op(&stack_operator);
                flag_unary = SUCCESS;
            }
        }

        else if(temp -> type == PRNTS_OPEN)
        {
            push_back(&stack_operator, temp -> value, temp -> type, temp -> priority);
        }

        else if(temp -> type == PRNTS_CLOSE)
        {
            while(!stack_is_empty(stack_operator) && stack_operator -> type != PRNTS_OPEN)
            {
                struct Data *temp_op = stack_operator;
                push_back(stack_polish_notation, temp_op -> value, temp_op -> type, temp_op -> priority);
                stack_operator = temp_op -> next;
                free(temp_op);
            }
            if(!stack_is_empty(stack_operator) && stack_operator -> type == PRNTS_OPEN)
            {
                struct Data *temp_op_open = stack_operator;
                stack_operator = temp_op_open -> next;
                free(temp_op_open);
            }
            else
            {
                while(!stack_is_empty(stack_operator))
                {
                    pop_back_op(&stack_operator);
                }
                flag_error = FAILURE;
            }
        }
        *reverse_stack = temp -> next;
        free(temp);
    }

    while (!stack_is_empty(stack_operator) && flag_error == SUCCESS)
    {
        if(stack_operator -> type == PRNTS_OPEN)
        {
            while(!stack_is_empty(stack_operator))
            {
                pop_back_op(&stack_operator);
            }
            flag_error = FAILURE;
        }
        if(flag_error == SUCCESS)
        {
            struct Data *temp = stack_operator;
            push_back(stack_polish_notation, temp -> value, temp -> type, temp -> priority);
            stack_operator = temp -> next;
            free(temp);
        }
    }
    return flag_error;
}

void flag_error_clear(struct Data **ptr1, struct Data **ptr2, struct Data **ptr3, struct Data **ptr4, struct Data **ptr5)
{
    while(!stack_is_empty(*ptr1))
    {
        pop_back_op(ptr1);
    }
    while(!stack_is_empty(*ptr2))
    {
        pop_back_op(ptr2);
    }
    while(!stack_is_empty(*ptr3))
    {
        pop_back_op(ptr3);
    }
    while(!stack_is_empty(*ptr4))
    {
        pop_back_op(ptr4);
    }
    while(!stack_is_empty(*ptr5))
    {
        pop_back_op(ptr5);
    }
}

void new_parsing_str(const char *str, char *new_str)
{
    char str_temp[1000] = {0};
    int index_temp = 0;
    int index = 0;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
        {
            continue;
        }
        str_temp[index_temp++] = str[i];
    }
    for(size_t i = 0; i < strlen(str_temp); i++)
    {
        if((str_temp[i] >= '0' && str_temp[i] <= '9') && str_temp[i + 1] == '(')
        {
            new_str[index++] = str_temp[i];
            new_str[index++] = '*';
        }
        else if((str_temp[i] >= '0' && str_temp[i] <= '9') && str_temp[i + 1] == 'x')
        {
            new_str[index++] = str_temp[i];
            new_str[index++] = '*';
        }
        else if(str_temp[i] == ')' && (str_temp[i + 1] >= '0' && str_temp[i + 1] <= '9'))
        {
            new_str[index++] = str_temp[i];
            new_str[index++] = '*';
        }
        else if(str_temp[i] == ')' && str_temp[i + 1] == '(')
        {
            new_str[index++] = str_temp[i];
            new_str[index++] = '*';
        }
        else if((str_temp[i] >= '0' && str_temp[i] <= '9') && (str_temp[i + 1] == 's' || str_temp[i + 1] == 'c' || str_temp[i + 1] == 't' || str_temp[i + 1] == 'a' || str_temp[i + 1] == 'l'))
        {
            new_str[index++] = str_temp[i];
            new_str[index++] = '*';
        }
        else if((str_temp[i] == '/' || str_temp[i] == '^' || str_temp[i] == '-' || str_temp[i] == '*') && str_temp[i + 1] == '+')
        {
            new_str[index++] = str_temp[i];
            i++;
        }
        else if(str_temp[0] == '+' && i == 0)
        {
            new_str[index++] = '0';
            new_str[index++] = str_temp[i];
        }
        else if(str_temp[i] == '(' && str_temp[i + 1] == '+')
        {
            new_str[index++] = str_temp[i];
            i++;
        }
        else if(str_temp[0] == '-' && i == 0)
        {
            new_str[index++] = '0';
            new_str[index++] = str_temp[i];
        }
        else if(str_temp[i] == '(' && str_temp[i + 1] == '-')
        {
            new_str[index++] = str_temp[i];
            new_str[index++] = '0';
        }
        else new_str[index++] = str_temp[i];
    }
    //new_str[index] = '\0';
}

int lixem_parsing(struct Data **stack, char *str)
{
    double val = 0;
    int i = 0;
    int flag_error = SUCCESS;
    char *number_str = NULL;

    if(str[0] == '\0') flag_error = FAILURE;

    while (str[i] != '\0' && flag_error == SUCCESS)
    {
        switch (element_definition(str[i], str, &i))
        {
        case NUMBER:
            number_str = malloc(256 * sizeof(char));
            flag_error = number_entry(str, number_str, &i);
            if(flag_error == SUCCESS)
            {
                val = atof(number_str);
                push_back(stack, val, NUMBER, 0);
            }
            free(number_str);
            number_str = NULL;
            break;

        case PRNTS_OPEN:
            push_back(stack, 0, PRNTS_OPEN, 4);
            break;

        case PRNTS_CLOSE:
            push_back(stack, 0, PRNTS_CLOSE, 4);
            break;

        case PLUS:
            push_back(stack, 0, PLUS, 1);
            break;

        case MINUS:
            push_back(stack, 0, MINUS, 1);
            break;

        case MULTI:
            push_back(stack, 0, MULTI, 2);
            break;

        case DIV:
            push_back(stack, 0, DIV, 2);
            break;

        case MOD:
            push_back(stack, 0, MOD, 2);
            break;

        case POW:
            push_back(stack, 0, POW, 3);
            break;

        case SIN:
            push_back(stack, 0, SIN, 4);
            break;

        case SQRT:
            push_back(stack, 0, SQRT, 4);
            break;

        case COS:
            push_back(stack, 0, COS, 4);
            break;

        case TAN:
            push_back(stack, 0, TAN, 4);
            break;

        case LN:
            push_back(stack, 0, LN, 4);
            break;

        case LOG:
            push_back(stack, 0, LOG, 4);
            break;

        case ASIN:
            push_back(stack, 0, ASIN, 4);
            break;

        case ACOS:
            push_back(stack, 0, ACOS, 4);
            break;

        case ATAN:
            push_back(stack, 0, ATAN, 4);
            break;

        case FAILURE:
            flag_error = FAILURE;
            break;

        default:
            flag_error = FAILURE;
            break;
        }
        i++;
    }

    return flag_error;
}

int stack_is_empty(struct Data *ptr)
{
    return  ptr == NULL;
}

int peek_stack_priority(struct Data *ptr)
{
    return ptr -> priority;
}

int peek_stack_op(struct Data *ptr)
{
    return ptr -> type;
}

int pop_back_op(struct Data **ptr)
{
    struct Data *p = *ptr;
    int res = p -> type;
    *ptr = p -> next;
    free(p);
    return res;
}

double pop_back_val(struct Data **ptr)
{
    struct Data *p = *ptr;
    double res = p -> value;
    *ptr = p -> next;
    free(p);
    return res;
}

void print_stack(struct Data *ptr)
{
    while (ptr != NULL)
    {
        printf("%lf\n", ptr->value);
        ptr = ptr-> next;
    }
}

void push_back(struct Data **ptr, double Data, int type_t, int priority_t)
{
    struct Data *elem = malloc(sizeof(struct Data));
    elem -> next = *ptr;
    elem -> value = Data;
    elem -> type = type_t;
    elem -> priority = priority_t;
    *ptr = elem;
}

int element_definition(int c, char *str, int *i)
{
    if(c >= '0' && c <= '9')    return NUMBER;

    if(c == '+')                return PLUS;

    if(c == '-')                return MINUS;

    if(c == '(')                return PRNTS_OPEN;

    if(c == ')')                return PRNTS_CLOSE;

    if(c == '*')                return MULTI;

    if(c == '/')                return DIV;

    if(c == '^')                return POW;

    if(c == 'm')                return check_mod_function(str, i);

    if(c == 's')                return check_s_functions(str, i);

    if(c == 'c')                return check_cos_function(str, i);

    if(c == 't')                return check_tan_function(str, i);

    if(c == 'l')                return check_log_functions(str, i);

    if(c == 'a')                return check_a_functions(str, i);


    return FAILURE;
}


int number_entry(char *str, char *number_str, int *i)
{
    int index = 0;
    while((str[*i] >= '0' && str[*i] <= '9') || str[*i] == '.')
    {
        if(str[*i] == '.')
        {
            if(!(str[*i + 1] >= '0' && str[*i + 1] <= '9')) return FAILURE;
        }
        number_str[index++] = str[*i];
        (*i)++;
    }
    (*i)--;
    number_str[index] = '\0';
    return SUCCESS;
}

int check_cos_function(char *str, int *i)
{
    if(str[*i + 1] == 'o' && str[*i + 2] == 's')
    {
        *i += 2;
        return COS;
    }

    return FAILURE;
}

int check_tan_function(char *str, int *i)
{
    if(str[*i + 1] == 'a' && str[*i + 2] == 'n')
    {
        *i += 2;
        return TAN;
    }

    return FAILURE;
}

int check_mod_function(char *str, int *i)
{
    if(str[*i + 1] == 'o' && str[*i + 2] == 'd')
    {
        *i += 2;
        return MOD;
    }

    return FAILURE;
}

int check_s_functions(char *str, int *i)
{
    if(str[*i + 1] == 'i' && str[*i + 2] == 'n')
    {
        *i += 2;
        return SIN;
    }
    if (str[*i + 1] == 'q' && str[*i + 2] == 'r' && str[*i + 3] == 't')
    {
        *i += 3;
        return SQRT;
    }

    return FAILURE;
}

int check_log_functions(char *str, int *i)
{
    if(str[*i + 1] == 'n')
    {
        *i += 1;
        return LN;
    }
    if(str[*i + 1] == 'o' && str[*i + 2] == 'g')
    {
        *i += 2;
        return LOG;
    }

    return FAILURE;
}

int check_a_functions(char *str, int *i)
{
    if(str[*i + 1] == 'c')
    {
        *i += 1;
        if(check_cos_function(str, i) == COS) return ACOS;
    }

    if(str[*i + 1] == 's')
    {
        *i += 1;
        if(check_s_functions(str, i) == SIN)  return ASIN;
    }

    if(str[*i + 1] == 't')
    {
        *i += 1;
        if(check_tan_function(str, i) == TAN) return ATAN;
    }
    (*i)--;
    return FAILURE;
}
