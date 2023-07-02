#ifndef __MAIN_H__
#define __MAIN_H__


#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define UNUSED(var) (void)(var)


/** Data Structures **/

/**
 * struct fmt - Associates format specifier with the function
 *
 * @fmt: the format specifier
 * @func: the associated function
 */
typedef struct fmt
{
	char fmt;
	int (*func)(va_list);
} fmt_t;


/** Functions Prototypes **/

int _printf(const char *, ...);
int handle_fmt(const char *, va_list, int *);

/* Types handling Functions */
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_bin(va_list);
int print_unum(va_list);
int print_oct(va_list);
int print_hex(va_list);
int print_HEX(va_list);

/* UTILS */
int count_digits(int);
void print_number(int);
char *convert(unsigned long int, int, int);

/* Write Functions */
int _putchar(char);
int _puts(char *);

#endif /** __MAIN_H__ **/
