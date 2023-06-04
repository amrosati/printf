#ifndef __MAIN_H__
#define __MAIN_H__


#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(var) (void)(var)


/** Data Structures **/

/**
 * struct fmt - fmt_t
 *
 * @fmt: the format specifier
 * @func: the associated function
 */
typedef struct
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


#endif /** __MAIN_H__ **/
