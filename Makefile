##
## EPITECH PROJECT, 2019
## COMPILATION
## File description:
## Makefile
##

NAMELIB		= libmy.a
DIRLIB		=./lib/
DIRLIBMY		=./lib/my/
DIRTEST		=./tests/*.c
DIRMAIN		=./main_dos/*.c

SRC		=	push_swap.c		\
			param_1.c		\
			param_2.c		\
			param_3.c

SRC_TESTS	=	criterion.c

SRC_O	=	push_swap.o		\
			param_1.o		\
			param_2.o		\
			param_3.o

COMPIL		= gcc $(SRC) -L $(DIRLIB) $(DIRMAIN) -lmy -o $(EXEC)
COMPIL_DEBUG		= gcc $(SRC) -L $(DIRLIB) $(DIRMAIN) -lmy -o $(EXEC) -g3
COMPIL_TEST		= gcc $(SRC) -g3 -L $(DIRLIB) $(DIRMAIN) $(DIRTEST) --coverage -lcriterion -lmy -l csfml-graphics -o $(EXEC_TEST)
EXEC		= push_swap
EXEC_TEST		= tests_push_swap
RUN_TESTS	=	./$(EXEC_TEST)
RUN_VALGRIND	=	valgrind --leak-resolution=high --num-callers=40 --track-origins=yes ./$(EXEC)

COVERAGE	=	gcovr --exclude tests/
COVERAGE_BRANCH		=	gcovr --exclude tests/ -b

all	: make compilation clean

make:
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

tests_run: make compilation compilation_test run_test clean test_clean

debug: make compilation compilation_debug clean

valgrind: make compilation compilation_debug run_valgrind clean