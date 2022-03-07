##
## EPITECH PROJECT, 2021
## A Fantastic Epitech Project
## File description:
## Makefile
##

## path for each scripts
SRC			=	$(addprefix sources/,	\
				prog.c					\
				)
MAIN		=	sources/main.c
TEST		=	tests/unit_test.c
INCLUDEPATH	=	includes
TESTOBJ		=	$(TEST:.c=.o)
OBJ			=	$(SRC:.c=.o)
MAINOBJ		=	$(MAIN:.c=.o)

## import lib options
LIBS	=	sources/lib/libmy.a

## name of the binaries
EXEC		=	exec_name
DEBUGBIN	=	debug
TESTBIN		=	unit_test

## flags
CFLAGS		=	-Wextra -Wall $(addprefix -I, $(INCLUDEPATH)) 	\
				-lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system
LDFLAGS		=	$(foreach lib, $(LIBS), $(addprefix -L, $(dir $(lib)))\
				$(addprefix -l, $(subst lib,,$(basename $(notdir $(lib))))))
DEBUGFLAGS	=	-g3
TESTFLAGS	=	-lcriterion

## compilator
$(CC)	=	gcc

#-------------------------------------------------------------
#DO NOT EDIT BELOW THIS LINE
#-------------------------------------------------------------

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $^\
	&& printf "[\033[1;35mcompiled\033[0m] % 29s\n" $< |  tr ' ' '.'\
	|| printf "[\033[1;31merror\033[0m] % 29s\n" $< |  tr ' ' '.'

all: do_libs $(EXEC)

$(EXEC): $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS) $(CFLAGS)
	@echo -e "\e[1;36mFinished compiling $@\e[0m"

do_libs:
	@$(foreach lib, $(LIBS), $(MAKE) -C $(dir $(lib));)

clean:
	@rm -f *#
	@rm -f *~
	@rm -f $(OBJ)
	@rm -f $(MAINOBJ)
	@rm -f $(TESTOBJ)
	@printf "\e[0;33mDeleted all .o of $(EXEC)\e[0m\n"
	@$(foreach lib, $(LIBS), $(MAKE) -C $(dir $(lib)) clean;)
	@echo -e "\e[1;36mDeleted all temporary files\e[0m"

fclean: clean
	@rm -f $(EXEC)
	@rm -f $(DEBUGBIN)
	@rm -f $(TESTBIN)
	@printf "\e[0;33mDeleted $(EXEC) binary\e[0m\n"
	$(foreach lib, $(LIBS), $(MAKE) -C $(dir $(lib)) fclean;)
	@echo -e "\e[1;36mDeleted all temporary files\e[0m"

re: fclean all

debug: CFLAGS += $(DEBUGFLAGS)
debug: fclean lib $(OBJ) $(MAINOBJ)
	@$(CC) -o $(DEBUGBIN) $(OBJ) $(MAINOBJ) $(LDFLAGS) $(CFLAGS)
	@echo -e "\e[1;36mFinished compiling $(DEBUGBIN) $@\e[0m"

unit_tests: fclean lib $(OBJ)
	@$(CC) -o $(TESTBIN) $(OBJ) $(TEST OBJ) $(LDFLAGS) $(CFLAGS) $(TESTFLAGS)
	@echo -e "\e[1;36mFinished compiling $(TESTBIN) $@\e[0m"

run_tests: unit_tests
	./$(TESTBIN)

.PHONY:	all	do_libs	clean	fclean	re	debug	unit_tests	run_tests
