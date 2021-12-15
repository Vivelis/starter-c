##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

## path to scripts
SRC	=	prog/path.c
MAIN	=	main/prog/path.c
TEST	=	tests/path.c

## path to lib file
LIBPATH	=	./lib/

## lib name
LIBNAME	=	my

## binaries names
EXEC	=	exec_name
DEBUGBIN	=	debug
TESTBIN	=	unit_test


#-------------------------------------------------------------
#DO NOT EDIT BELOW THIS LINE
#-------------------------------------------------------------

$(EXEC): subsystem
	gcc -o $(EXEC) $(SRC) $(MAIN) -L$(LIBPATH) -l$(LIBNAME)

all: $(EXEC)

subsystem:
	cd $(LIBPATH) && $(MAKE)

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
