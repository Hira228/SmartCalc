CC = gcc 
FLAGS =  -Wall -Werror -Wextra -std=c11# -fsanitize=address -g
CLEAN = clean
TESTS = TEST/
SRCS = $(wildcard *.c)
OBJS = ${SRCS:.c = .o}
TEST_OBJS = ${SRCS_TEST:.c = .o}
SRCS_TEST = $(wildcard $(TESTS)*.c)
UNAME := $(shell uname)
TARGET = test
GCOV = gcov_report
GCOV_FLAGS = -fprofile-arcs -ftest-coverage -lgcov 

ifeq ($(UNAME), Linux)
 TEST_FLAGS += -lcheck -lsubunit -lrt -lpthread -lm
else
 TEST_FLAGS += -lcheck -lm
endif

%.o: %.c
	${CC} -c ${FLAGS} $@ $<

${TESTS}%.o: ${TESTS}%.c
	${CC} -c ${FLAGS} $@ $< 

all: ${CLEAN} ${TARGET} ${GCOV} dvi

${TARGET} : $(SRCS) ${SRCS_TEST}
	${CC} ${FLAGS} -o TESTS ${SRCS} ${SRCS_TEST} ${TEST_FLAGS} 
	./TESTS

install: 
	rm -rf Build_Calc
	mkdir Build_Calc
	cd Build_Calc&&cmake ../
	cd Build_Calc&&make


dist: install
	tar --totals -cvf smart_calc.tar .

${GCOV}: build_file
	$(CC) $(FLAGS) $(GCOV_FLAGS) $(SRCS_TEST) $(SRCS) $(TEST_FLAGS) -o Build_test/${GCOV} 
	Build_test/./${GCOV} 
	lcov -o ${GCOV}.info -c -d .
	genhtml ${GCOV}.info -o html_report
	open html_report/index.html

dvi:
	Doxygen .
	open html/index.html

build_file:
	mkdir Build_test

$(CLEAN) :
	rm -rf html latex Build_Calc TESTS *.a *.o $(TESTS).*o *.out app *.info html_report TEST/*.o *.gcno *.gcda 
