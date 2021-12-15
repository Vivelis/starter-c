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

int insert(fct_array_t *fct_array, char flag, int (*fct) (va_list));
fct_array_t *initialisation(void);
fct_array_t *init_fct_array(void);
void free_fct_array(fct_array_t *fct_array);
int disp_sint(va_list ap);
int disp_o_usint(va_list ap);
int disp_u_usint(va_list ap);
int disp_x_usint(va_list ap);
int disp_majx_usint(va_list ap);
int disp_binar(va_list ap);
int disp_char(va_list ap);
int disp_string(va_list ap);
int disp_printable_str(va_list ap);
int disp_pointer(va_list ap);
int disp_pourcent(va_list ap);
int find_flag(const char *format, va_list ap);
#endif
