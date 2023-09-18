#include "main.h"

/* Function to check if a character is a digit */
int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

/* Function to calculate the length of a string */
int _strlen(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

/* Function to print a string to stdout */
void _puts(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        _putchar(s[i]);
        i++;
    }
}

/* Function to copy a string from src to dest */
char *_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

/* Function to convert a string to an integer */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (s[0] == '-') {
        sign = -1;
        i++;
    }

    for (; s[i] != '\0'; i++) {
        result = result * 10 + (s[i] - '0');
    }

    return sign * result;
}
