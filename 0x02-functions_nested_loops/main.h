#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - This function push an input to stdout
 * @c: character to be written
 * Return: On success, returns c.
 * On error, returns -1 and sets errno
 */

int _putchar(char c);
void print_alphabet_x10(void);
void print_alphabet(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);

#endif
