##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

## path for each scripts
SRC		=	
TEST	=	tests/test.c
MAIN	=	sources/main.c

## path to acced the lib file
LIBPATH	=	./lib/

## name of the lib
LIBNAME	=	my

## name of the binaries
EXEC	=	exec_name
DEBUGBIN	=	debug
TESTBIN	=	unit_test

## flags
CFLAG	=	-W
DEBUGFLAG	=	-g3 -Wall -Wextra
TESTFLAG	=	-lcriterion

#-------------------------------------------------------------
#DO NOT EDIT BELOW THIS LINE
#-------------------------------------------------------------

$(EXEC): subsystem
	gcc -o $(EXEC) $(SRC) $(MAIN) -L$(LIBPATH) -l$(LIBNAME) $(CFLAG)

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
	gcc -o $(DEBUGBIN) $(SRC) $(MAIN) -L$(LIBPATH) -l$(LIBNAME) $(DEBUGFLAG)

unit_tests: fclean subsystem $(TEST)
	gcc -o $(TESTBIN) $(SRC) $(TEST) -L$(LIBPATH) -l$(LIBNAME) $(TESTFLAG)

run_tests: unit_tests
	./$(TESTBIN)
