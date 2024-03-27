#include <stdio.h>
#include <string.h>
//#include <ctype.h> // For tolower() in stricmp()

int main() {
    char str1[50] = "Hello, World!";
    char str2[50] = "HELLO, world!";
    char str3[50];
    char str4[50] = "Another String";
    char str5[100]; 
    char str6[] = "Find the needle in this haystack: needle";
    char str7[] = "split this string by spaces";

    printf("a. strlen(): Length of str1 is %lu\n", strlen(str1));

  
    strcpy(str3, str1);
    printf("b. strcpy(): Copied str1 to str3: %s\n", str3);

 
    strcat(str3, str4);
    printf("c. strcat(): Concatenated str3 and str4: %s\n", str3);


    printf("d. strcmp(): Comparison between str1 and str2: %d\n", strcmp(str1, str2));



    int i, diff = 0;
    for (i = 0; str1[i] && str2[i]; ++i) {
        if (tolower(str1[i]) != tolower(str2[i])) {
            diff = 1;
            break;
        }
    }
    printf("e. stricmp() workaround: str1 and str2 are %s\n", diff == 0 ? "equal (case-insensitive)" : "not equal (case-insensitive)");

   
  
    int len = strlen(str1);
    for (i = 0; i < len; i++) {
        str3[i] = str1[len - 1 - i];
    }
    str3[i] = '\0';
    printf("f. strrev() workaround: Reverse of str1 is %s\n", str3);

   
    char *ptr = strchr(str1, 'a');
    printf("g. strchr(): First occurrence of 'a' in str1 is at position %ld\n", ptr - str1);

  
    ptr = strstr(str6, "needle");
    printf("h. strstr(): Substring \"needle\" found at position %ld\n", ptr - str6);


    strncpy(str5, str4, 5);
    str5[5] = '\0'; 
    printf("i. strncpy(): First 5 characters of str4 copied to str5: %s\n", str5);

   
    strncat(str1, str4, 6);
    printf("j. strncat(): str1 after concatenating first 6 chars of str4: %s\n", str1);

  
    printf("k. strncmp(): Compare first 5 characters of str1 and str4: %d\n", strncmp(str1, str4, 5));

 
    printf("l. strtok(): Splitting str7 by spaces:\n");
    char *token = strtok(str7, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}

