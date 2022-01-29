##
## EPITECH PROJECT, 2021
## A Fantastic Epitech Project
## File description:
## Makefile
##

## path for each scripts
SRC			=	sources/prog.c
MAIN		=	sources/main.c
TEST		=	tests/unit_test
OBJ			=	$(SRC:.c=.o)\
				$(MAIN:.c=.o)
INCLUDEPATH	=	includes

## import lib options
LIBS	=	./sources/lib/libmy.a

## name of the binaries
EXEC		=	exec_name
DEBUGBIN	=	debug
TESTBIN		=	unit_test

## flags
CFLAGS		=	-Wextra -Wall $(addprefix -I, $(INCLUDEPATH))
LDFLAGS		=	$(addprefix -L, $(dir $(LIBS)))\
				$(addprefix -l, $(subst lib,,$(basename $(notdir $(LIBS)))))
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

all: $(LIBS) $(EXEC)

$(EXEC): $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS) $(CFLAGS)
	@echo -e "\e[1;36mFinished compiling $@\e[0m"

$(LIBS):
	@$(MAKE) -C $(dir $(LIBS))

clean:
	@rm -f *#
	@rm -f *~
	@rm -f $(OBJ)
	@printf "\e[0;33mDeleted all .o of $(EXEC)\e[0m\n"
	@$(MAKE) -C $(dir $(LIBS)) clean
	@echo -e "\e[1;36mDeleted all temporary files\e[0m"

fclean: clean
	@rm -f $(EXEC)
	@rm -f $(DEBUGBIN)
	@rm -f $(TESTBIN)
	@printf "\e[0;33mDeleted $(EXEC) binary\e[0m\n"
	@$(MAKE) -C $(dir $(LIBS)) fclean
	@echo -e "\e[1;36mDeleted all temporary files\e[0m"

re: fclean all

debug: fclean $(LIBS) $(OBJ)
	@$(CC) -o $(DEBUGBIN) $(OBJ) $(LDFLAGS) $(CFLAGS) $(DEBUGFLAGS)
	@echo -e "\e[1;36mFinished compiling $(DEBUGBIN) $@\e[0m"

unit_tests: fclean $(LIBS) $(OBJ)
	@$(CC) -o $(TESTBIN) $(OBJ) $(LDFLAGS) $(CFLAGS) $(TESTFLAGS)
	@echo -e "\e[1;36mFinished compiling $(TESTBIN) $@\e[0m"

run_tests: unit_tests
	./$(TESTBIN)

.PHONY:	all	fclean	clean	re	debug	unit_tests	run_tests
