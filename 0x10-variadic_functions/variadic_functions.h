#ifndef VARGS_H
#define VARGS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - print struct
 *
 * @print: for formatting
 *
 * @f: functions pointer
*/

typedef struct print
{
	char *print;
	void (*f)(char *, va_list);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
