#include "main.h"

/* Function to concatenate two strings */
char *_strcat(char *dest, char *src) {
    int dest_len = _strlen(dest);
    int i = 0;
    
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    
    dest[dest_len + i] = '\0';
    
    return dest;
}

/* Function to concatenate n characters from src to dest */
char *_strncat(char *dest, char *src, int n) {
    int dest_len = _strlen(dest);
    int i = 0;
    
    while (src[i] != '\0' && i < n) {
        dest[dest_len + i] = src[i];
        i++;
    }
    
    dest[dest_len + i] = '\0';
    
    return dest;
}

/* Function to copy n characters from src to dest */
char *_strncpy(char *dest, char *src, int n) {
    int i = 0;
    
    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }
    
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
    
    return dest;
}

/* Function to compare two strings */
int _strcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }
    return s1[i] - s2[i];
}

/* Function to fill a block of memory with a specific value */
char *_memset(char *s, char b, unsigned int n) {
    unsigned int i;
    for (i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}
