#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int fun_id(va_list toprint);
int fun_c(va_list toprint);
int fun_s(va_list toprint);
int _putchar(char c);
int _puts(char *s);
int getint(int numb);
int fun_b(va_list toprint);
int getunint(unsigned int numb);
int fun_u(va_list toprint);
int fun_o(va_list toprint);
int fun_x(va_list toprint);
int fun_X(va_list toprint);
int tryget(int num);
int fun_p(va_list toprint);
int fun_S(va_list toprint);


#endif
