#ifndef __MAIN_H__
#define __MAIN_H__


#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define UNUSED(var) (void)(var)
#define BUFFSIZ	1024


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
	int (*handle)(va_list);
} fmt_t;


/*** Functions Prototypes ***/

/* Print Function */
int _printf(const char *, ...);


/** Types handling Functions **/

/* Handles Formats Specifiers */
int handle_format(const char *, va_list, int *);

/* Characters */
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);

/* Numbers */
int print_int(va_list);
int print_uint(va_list);

/* Number Bases */
int print_bin(va_list);
int print_oct(va_list);
int print_hex(va_list);
int print_HEX(va_list);


/** UTILS **/

/* Numbers Handlers */
int count_digits(int);
void print_number(int);

/* Converter to Base */
char *convert(unsigned long int, int, int);


/** Write Functions **/
int _putchar(char);
int _puts(char *);


#endif /** __MAIN_H__ **/
