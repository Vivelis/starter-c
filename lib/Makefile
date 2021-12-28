##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

#library name
LIB	=	libmy.a

#Compiler and Linker
CC          := cc

#library sources
SRC	=	my/my_compute_power_rec.c	\
		my/my_compute_square_root.c	\
		my/my_find_prime_sup.c		\
		my/my_getnbr.c				\
		my/my_isneg.c				\
		my/my_is_prime.c			\
		my/my_putchar.c				\
		my/my_puterror.c			\
		my/my_put_nbr.c				\
		my/my_putstr.c				\
		my/my_revstr.c				\
		my/my_showmem.c				\
		my/my_showstr.c				\
		my/my_sort_int_array.c		\
		my/my_strcapitalize.c		\
		my/my_strcat.c				\
		my/my_strcmp.c				\
		my/my_strcpy.c				\
		my/my_strdup.c				\
		my/my_str_isalpha.c			\
		my/my_str_islower.c			\
		my/my_str_isnum.c			\
		my/my_str_isprintable.c		\
		my/my_str_isupper.c			\
		my/my_strlen.c				\
		my/my_strlowcase.c			\
		my/my_strncat.c				\
		my/my_strncmp.c				\
		my/my_strncpy.c				\
		my/my_strstr.c				\
		my/my_strupcase.c			\
		my/my_swap.c				\
		my/my_memset.c				\
		my/my_revstrtol.c			\
		my/my_strtol.c				\
		my/my_inttos.c				\
		my/my_printf.c				\
		my/my_printf_fctarr.c		\
		my/my_printf_sint.c 		\
		my/my_printf_usint.c		\
		my/my_printf_usinthex.c		\
		my/my_printf_char.c			\
		my/my_printf_point.c		\
		my/my_printf_setflag.c		\
		my/do_strmalloc.c			\
		my/my_printf_flag_detection.c

#obj file path
BUILDDIR=	obj
SRCDIR	=	my
SRCEXT      := c
OBJEXT      := o

#flags
CFLAGS      := -Wall

#------------------------------------------------------------------------------
#DO NOT EDIT BELOW THIS LINE
#------------------------------------------------------------------------------

OBJ	=	$(SRC:.c=.o)

$(LIB): $(OBJ)
	ar rc $(LIB) $(OBJ)

all: $(LIB)

clean:
	rm -f *~
	rm -f *#

fclean: clean
	rm -f $(OBJ)
	rm -f $(LIB)

re: fclean all
