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
SRC	=	my/math/my_compute_power_rec.c			\
		my/math/my_compute_square_root.c		\
		my/math/my_sort_int_array.c				\
		my/math/my_find_prime_sup.c				\
		my/manipulations/my_swap.c				\
		my/manipulations/my_memset.c			\
		my/my_put/my_putchar.c					\
		my/my_put/my_puterror.c					\
		my/my_put/my_put_nbr.c					\
		my/my_put/my_putstr.c					\
		my/str_manipulation/my_revstr.c			\
		my/str_manipulation/my_strcapitalize.c	\
		my/str_manipulation/my_strncat.c	\
		my/str_manipulation/my_strcat.c			\
		my/str_manipulation/my_strcmp.c			\
		my/str_manipulation/my_strcpy.c			\
		my/str_manipulation/my_strdup.c			\
		my/is_true/my_str_islower.c				\
		my/is_true/my_is_prime.c				\
		my/is_true/my_str_isnum.c				\
		my/is_true/my_str_isprintable.c			\
		my/is_true/my_str_isupper.c				\
		my/str_manipulation/my_strlen.c			\
		my/str_manipulation/do_strmalloc.c		\
		my/str_manipulation/my_strlowcase.c		\
		my/str_manipulation/my_strncmp.c		\
		my/str_manipulation/my_strncpy.c		\
		my/str_manipulation/my_strstr.c			\
		my/str_manipulation/my_strupcase.c		\
		my/converters/my_revstrtol.c			\
		my/converters/my_getnbr.c				\
		my/converters/my_strtol.c				\
		my/converters/my_inttos.c				\
		my/my_printf/my_printf.c				\
		my/my_printf/my_printf_fctarr.c			\
		my/my_printf/my_printf_sint.c 			\
		my/my_printf/my_printf_usint.c			\
		my/my_printf/my_printf_usinthex.c		\
		my/my_printf/my_printf_char.c			\
		my/my_printf/my_printf_point.c			\
		my/my_printf/my_printf_setflag.c		\
		my/my_printf/my_printf_flag_detection.c

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
