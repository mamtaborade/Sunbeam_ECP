#include <stdio.h>


// a. Simulate strlen()
size_t my_strlen(const char* str) {
    const char *s;
    for (s = str; *s; ++s) {}
    return (s - str);
}

// b. Simulate strcpy()
char* my_strcpy(char *dest, const char *src) {
    char *save = dest;
    while ((*dest++ = *src++));
    return save;
}

// c. Simulate strcat()
char* my_strcat(char *dest, const char *src) {
    char *save = dest;
    while (*dest) dest++;
    while ((*dest++ = *src++));
    return save;
}

// d. Simulate strcmp()
int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}

// e. Simulate stricmp()
int my_stricmp(const char *str1, const char *str2) {
    int f, l;
    do {
        f = tolower((unsigned char)*str1++);
        l = tolower((unsigned char)*str2++);
    } while (f && (f == l));
    return f - l;
}

// f. Simulate strrev()
char* my_strrev(char* str) {
    char *p1, *p2;
    if (!str || !*str) return str;
    for (p1 = str, p2 = str + my_strlen(str) - 1; p2 > p1; ++p1, --p2) {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

// g. Simulate strchr()
char* my_strchr(const char *str, int ch) {
    while (*str && *str != (char)ch) str++;
    if (*str == (char)ch) return (char*)str;
    return NULL;
}

// h. Simulate strstr()
char* my_strstr(const char *haystack, const char *needle) {
    if (!*needle) return (char*)haystack;
    for (; *haystack; ++haystack) {
        if (*haystack == *needle) {
            const char *h, *n;
            for (h = haystack, n = needle; *h && *n && (*h == *n); ++h, ++n) {}
            if (!*n) return (char*)haystack;
        }
    }
    return NULL;
}

int main() {
   
    const char* str = "Hello, World!";
    const char* find = "World";
    char copy[50], concat[100] = "Hello", reverse[50] = "reverse";
    
    printf("strlen: %zu\n", my_strlen(str));
    printf("strcpy: %s\n", my_strcpy(copy, str));
    printf("strcat: %s\n", my_strcat(concat, ", World!"));
    printf("strcmp: %d\n", my_strcmp(str, "Hello, World!"));
    printf("stricmp: %d\n", my_stricmp(str, "hello, WORLD!"));
    printf("strrev: %s\n", my_strrev(reverse));
    printf("strchr: %s\n", my_strchr(str, 'W'));
    printf("strstr: %s\n", my_strstr(str, find));

    return 0;
}

