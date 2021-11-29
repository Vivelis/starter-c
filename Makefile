##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	prog/path.c

LIBPATH	=	./lib/

LIBNAME	=	my

MAIN	=	main/prog/path.c

EXEC	=	exec_name

DEBUGBIN	=	debug

TESTBIN	=	unit_test

TEST	=	tests/path.c

#-------------------------------------------------------------
#DO NOT EDIT BELOW THIS LINE
#-------------------------------------------------------------

subsystem:
	cd $(LIBPATH) && $(MAKE)

$(EXEC): subsystem
	gcc -o $(EXEC) $(SRC) $(MAIN) -L$(LIBPATH) -l$(LIBNAME)

all: $(EXEC)

clean:
	rm -f *#
	rm -f *~

fclean: clean
	rm -f $(EXEC)
	cd $(LIBPATH) && $(MAKE) fclean

re: fclean all

debug: fclean subsystem
	gcc -o $(DEBUGBIN) $(SRC) $(MAIN) -L$(LIBPATH) -l$(LIBNAME) -g3 -Wall -Wextra

unit_tests: fclean subsystem $(TEST)
	gcc -o $(TESTBIN) $(SRC) $(TEST) -L$(LIBPATH) -l$(LIBNAME) -lcriterion

run_tests: unit_tests
	./$(TESTBIN)
