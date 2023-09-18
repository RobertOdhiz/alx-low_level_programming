#include "main.h"

/* Function to write a character to stdout */
int _putchar(char c) {
    return write(1, &c, 1);
}

/* Function to check if a character is lowercase */
int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

/* Function to check if a character is alphabetic */
int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/* Function to compute the absolute value of an integer */
int _abs(int n) {
    return (n < 0) ? -n : n;
}

/* Function to check if a character is uppercase */
int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}
