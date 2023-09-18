#include "main.h"

/* Function to copy a block of memory from src to dest */
char *_memcpy(char *dest, char *src, unsigned int n) {
    unsigned int i;
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}

/* Function to locate the first occurrence of a character in a string */
char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}

/* Function to get the length of a prefix substring */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s != '\0' && strchr(accept, *s) != NULL) {
        count++;
        s++;
    }
    return count;
}

/* Function to locate the first occurrence of any character in a string */
char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (strchr(accept, *s) != NULL) {
            return s;
        }
        s++;
    }
    return NULL;
}

/* Function to locate a substring within a string */
char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        
        if (*n == '\0') {
            return haystack;
        }
        
        haystack++;
    }
    return NULL;
}
