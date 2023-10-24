#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int num);
int print_last_digit(int num);
void reset_to_98(int *num);
void swap_int(int *a, int *b);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *s);
char *leet(char *s);
char *rot13(char *s);
void print_number(int n);
void rev_string(char *n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *_memset(char *s, char b, unsigned int n);


#endif
