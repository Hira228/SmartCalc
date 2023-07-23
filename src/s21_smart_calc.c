#include "s21_smart_calc.h"

int main()
{
    struct Data *stack = NULL;
    //push_back(&stack, 123, 0, 0);
    //int type_t = 0;
    char str[1000] = {0};
    scanf("%s", str);

    int flag_error = lixem_parsing(&stack, str);



    if (flag_error == FAILURE) printf("FAILURE\n");
    else printf("SUCCESS\n");

    if(stack == NULL) printf("NUUUUULLLLLLL\n");
    // printf("%d\n", pop_back_op(&stack));
    // printf("%lf\n", pop_back_val(&stack));
    // printf("%d\n", pop_back_op(&stack));
    // printf("%lf\n", pop_back_val(&stack));
    // printf("%d\n", pop_back_op(&stack));

    while (stack != NULL)
    {
        if(stack -> type == NUMBER) printf("%lf", pop_back_val(&stack));
        else if(stack -> type == PRNTS_OPEN) printf("( - %d", pop_back_op(&stack));
        else if(stack -> type == PRNTS_CLOSE) printf(") - %d", pop_back_op(&stack));
        else if(stack -> type == PLUS) printf("+ - %d", pop_back_op(&stack));
        else if(stack -> type == MINUS) printf("- - %d", pop_back_op(&stack));
        else if(stack -> type == MULTI) printf("* - %d", pop_back_op(&stack));
        else if(stack -> type == DIV) printf("/ - %d", pop_back_op(&stack));
        else if(stack -> type == MOD) printf("mod - %d", pop_back_op(&stack));
        else if(stack -> type == POW) printf("^ - %d", pop_back_op(&stack));
        else if(stack -> type == SIN) printf("sin - %d", pop_back_op(&stack));
        else if(stack -> type == COS) printf("cos - %d", pop_back_op(&stack));
        else if(stack -> type == SQRT) printf("sqrt - %d", pop_back_op(&stack));
        else if(stack -> type == TAN) printf("tan - %d", pop_back_op(&stack));
        else if(stack -> type == LN) printf("ln - %d", pop_back_op(&stack));
        else if(stack -> type == LOG) printf("log - %d", pop_back_op(&stack));
        else if(stack -> type == ASIN) printf("asin - %d", pop_back_op(&stack));
        else if(stack -> type == ACOS) printf("acos - %d", pop_back_op(&stack));
        else if(stack -> type == ATAN) printf("atan - %d", pop_back_op(&stack));
        printf("\n");
        //stack = stack -> next;
    }
}

int lixem_parsing(struct Data **stack, char *str)
{
    double val = 0;
    int i = 0;
    int flag_error = SUCCESS;
    char *number_str = NULL;

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

char peek_stack_priority(struct Data *ptr)
{
    if(!stack_is_empty(ptr)) return ptr -> value;
    return FAILURE;
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
    while(element_definition(str[*i], str, i) == NUMBER || str[*i] == '.')
    {
        if(str[*i] == '.')
        {
            if(element_definition(str[*i + 1], str, i) != NUMBER) return FAILURE;
        }
        number_str[index++] = str[*i];
        (*i)++;
    }
    (*i)--;
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