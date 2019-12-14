##
## EPITECH PROJECT, 2019
## COMPILATION
## File description:
## Makefile
##

NAMELIB		= libmy.a
DIRLIB		=./lib/
DIRLIBMY		=./lib/my/
DIR_TEST		=tests/
DIRMAIN		=./main_dos/*.c

CC		=	gcc

SRC		=	push_swap.c		\
			param_1.c		\
			param_2.c		\
			set_main.c		\
			set_draw.c

SRC_TESTS	=	$(DIR_TEST)criterion.c

SRC_O	=	push_swap.o		\
			param_1.o		\
			param_2.o		\
			set_main.o		\
			set_draw.o

COMPIL		= $(CC) $(SRC) -L $(DIRLIB) $(DIRMAIN) -lmy -o $(EXEC)
COMPIL_DEBUG		= $(CC) $(SRC) -L $(DIRLIB) $(DIRMAIN) -lmy -o $(EXEC) -g3
COMPIL_TEST		= $(CC) $(SRC) $(SRC_TESTS) -g3 -L $(DIRLIB) $(DIRMAIN) $(DIRTEST)  --coverage -lcriterion -lmy -o $(EXEC_TEST)
EXEC		= push_swap
EXEC_TEST		= my_tests_push_swap
RUN_TESTS	=	./$(EXEC_TEST)
RUN_VALGRIND	=	valgrind --leak-resolution=high --num-callers=40 --track-origins=yes ./$(EXEC)

COVERAGE	=	gcovr --exclude tests/
COVERAGE_BRANCH		=	gcovr --exclude tests/ -b

all	: build_lib compilation clean

build_lib:
		cd $(DIRLIBMY) && make

compilation:
		$(COMPIL)

compilation_test:
		$(COMPIL_TEST)

compilation_debug:
		$(COMPIL_DEBUG)

run_test:
		$(RUN_TESTS)
		$(COVERAGE)
		$(COVERAGE_BRANCH)

run_valgrind:
		$(RUN_VALGRIND)

clean:
		rm -f $(SRC_O)

test_clean:
		rm -f *.gcda rm -f *.gcno

fclean: clean test_clean
		rm -f $(EXEC) $(EXEC_TEST) $(DIRLIB)$(NAMELIB)

re: fclean all

tests_run: build_lib compilation compilation_test run_test clean test_clean

debug: build_lib compilation compilation_debug clean

valgrind: build_lib compilation compilation_debug run_valgrind clean