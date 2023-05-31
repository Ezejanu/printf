#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void fun_id(va_list toprint);
void fun_c(va_list toprint);
void fun_s(va_list toprint);
int _putchar(char c);
int _puts(char *s);
int getint(int numb);
void fun_b(va_list toprint);
int getunint(unsigned int numb);
void fun_u(va_list toprint);
void fun_o(va_list toprint);
void fun_x(va_list toprint);
void fun_X(va_list toprint);

#endif
