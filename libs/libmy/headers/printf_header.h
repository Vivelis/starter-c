/*
** EPITECH PROJECT, 2021
** B-PSU-100-TLS-1-1-myprintf-maceo.jalbert
** File description:
** printf_header.h
*/

#ifndef _PRINTF_HEADER_H_
    #define _PRINTF_HEADER_H_
    #include <stdarg.h>

typedef struct ffct_s ffct_t;
struct ffct_s {
    char flag;
    int (*fct) (va_list);
    ffct_t *next;
};
typedef struct fct_array_s {
    ffct_t *first;
}fct_array_t;

// my_printf_char.c
int putstr_printable(char *str);
int disp_char(va_list ap);
int disp_string(va_list ap);
int disp_printable_str(va_list ap);

// my_printf_fctarr.c
int insert(fct_array_t *fct_array, char flag, int (*fct) (va_list));
fct_array_t *initialisation(void);
fct_array_t *init_fct_array(void);
void free_fct_array(fct_array_t *fct_array);

// my_printf_flag_detection.c
int isflag(char c);
char *find_flag_type(const char *str, int *index);
int call_converter(char *flag, va_list ap);

// my_printf_setflag.c
int find_flag(const char *format, va_list ap);

// my_printf_point.c
int disp_pointer(va_list ap);
int disp_pourcent(va_list ap);

// my_printf_sint.c
int put_snbr_printf(int nbr);
int disp_sint(va_list ap);

// my_printf_usint.c
int conv_us_printf(unsigned int nbr, unsigned int base);
int disp_o_usint(va_list ap);
int disp_u_usint(va_list ap);
int disp_majx_usint(va_list ap);
int disp_binar(va_list ap);

// my_printf__usinthex.c
int conv_hex_printf(unsigned int nbr);
int disp_x_usint(va_list ap);

#endif
