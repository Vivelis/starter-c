/*
** EPITECH PROJECT, 2021
** libmy header
** File description:
** a header that prototype every fonctions of the lib my. @author @macgameur
*/

#ifndef MY_H_
    #define MY_H_
    #define _LOW_CHAR_ (str[index - 1] >= 'a' && str[index - 1] <= 'z')
    #define _NUM_ (str[index - 1] >= '0' && str[index - 1] <= '9')
    #include <stdlib.h>

// functions

/******** my_put ********/

/**
 * @brief write a character in stdout.
 * 
 * @param c character to write
 * @see lib/my/my_put/my_putstr.c
 */
void my_putchar(char c);

/**
 * @brief write a string in stdout.
 * 
 * @param str string to write
 * @see lib/my/my_put/my_putstr.c
 */
void my_putstr(char const *str);

/**
 * @brief write the string in stderr and return error_num.
 * 
 * @param str string to write in stderr
 * @param error_num number to return
 * @return int error_num
 */
int my_puterror(char *str, int error_num);

/**
 * @brief write the number given in parameter in stdout.
 * 
 * @param nbr the nbr to write
 * @return int always 0
 */
int my_putnbr(int nbr);

/**
 * @brief The my_printf() function, write in the std output, the string format
 * filled with, the parameters positioned after the format string.
 * 
 * @param format string to print with or with flags
 * @param ... variables corresponding to the given flags
 * @return 84 on error, else return the number of characters
 * printed (without '\0')).
 */
int my_printf(const char *format, ...);

/******** str_manipulation ********/

/**
 * @brief allocate memory for a string in str of size long.
 * 
 * @param str adress of the char * to allocate
 * @param size len of the string (excluding the '\0')
 * @return 84 in case of error, else return 0
 */
int do_strmalloc(char **str, long size);

/**
 * @brief 
 * 
 * @param str 
 * @param n 
 * @return char* 
 */
char *dup_nchar(char *str, int n);

/**
 * @brief 
 * 
 * @param str 
 * @return char* 
 */
char *my_revstr(char *str);

/**
 * @brief 
 * 
 * @param str 
 * @return char* 
 */
char *my_strcapitalize(char *str);

/**
 * @brief 
 * 
 * @param str 
 * @return char* 
 */
char *my_strlowcase(char *str);

/**
 * @brief 
 * 
 * @param str 
 * @return char* 
 */
char *my_strupcase(char *str);

/**
 * @brief 
 * 
 * @param str 
 * @param to_find 
 * @return char* 
 */
char *my_strstr(char *str, char const *to_find);

/**
 * @brief 
 * 
 * @param str 
 * @return int 
 */
int my_strlen(char const *str);

/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @return int 
 */
int my_strcmp(char const *s1, char const *s2);

/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int my_strncmp(char const *s1, char const *s2, int n);

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @return int 
 */
int my_strcpy(char **dest, char *src);

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return int 
 */
int my_strncpy(char **dest, char *src, int n);

/**
 * @brief 
 * 
 * @param src 
 * @return char* 
 */
char *my_strdup(char const *src);

/**
 * @brief 
 * 
 * @param str 
 * @param len 
 * @return char* 
 */
char *my_strndup(char *str, int len);

/**
 * @brief 
 * 
 * @param str 
 * @return int 
 */
int str_len(char *str);

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @return char* 
 */
char *my_strcat(char *dest, char const *src);

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param nb 
 * @return char* 
 */
char *my_strncat(char *dest, char const *src, int nb);

/******** math ********/

/**
 * @brief 
 * 
 * @param nb 
 * @param power 
 * @return int 
 */
int my_compute_power_rec(int nb, int power);

/**
 * @brief 
 * 
 * @param nb 
 * @return int 
 */
int my_compute_square_root(int nb);

/**
 * @brief 
 * 
 * @param nb 
 * @return int 
 */
int my_find_prime_sup(int nb);

/**
 * @brief 
 * 
 * @param tab 
 * @param size 
 */
void my_sort_int_array(int *tab, int size);

/******** manipulations ********/

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @param n 
 */
void my_memset(char *s, char c, int n);

/**
 * @brief 
 * 
 * @param a 
 * @param b 
 */
void my_swap(int *a, int *b);

/******** is_true ********/

/**
 * @brief 
 * 
 * @param nb 
 * @return char 
 */
char my_is_prime(int nb);

/**
 * @brief 
 * 
 * @param str 
 * @return char 
 */
char my_str_islower(char *str);

/**
 * @brief 
 * 
 * @param str 
 * @return char 
 */
char my_str_isnum(char *str);

/**
 * @brief 
 * 
 * @param str 
 * @return char 
 */
char my_str_isprintable(char *str);

/**
 * @brief 
 * 
 * @param str 
 * @return char 
 */
char my_str_isupper(char *str);

/**
 * @brief 
 * 
 * @param input 
 * @return char 
 */
char is_number(char input);

/******** converters ********/

/**
 * @brief 
 * 
 * @param str 
 * @return int 
 */
int my_getnbr(char const *str);

/**
 * @brief 
 * 
 * @param nbr 
 * @return char* 
 */
char *my_inttos(int nbr);

/**
 * @brief 
 * 
 * @param str 
 * @param start 
 * @return int 
 */
int my_revstrtol(char *str, int *start);

/**
 * @brief 
 * 
 * @param str 
 * @param end_index 
 * @return int 
 */
int my_strtol(char *str, int *end_index);

/**
 * @brief 
 * 
 * @param str_nbr 
 * @return int 
 */
int unsigned_nbr_to_int(char *str_nbr);
#endif
