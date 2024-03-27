#include <stdio.h>

void findAndReplace(char *source, const char *find, const char *replace) {
    // Calculate lengths of source, find, and replace strings
    int sourceLen = 0, findLen = 0, replaceLen = 0;
    for (; source[sourceLen] != '\0'; ++sourceLen);
    for (; find[findLen] != '\0'; ++findLen);
    for (; replace[replaceLen] != '\0'; ++replaceLen);

    // Check if source string is smaller than find string
    if (sourceLen < findLen)
        return;

    // Iterate through source string
    for (int i = 0; source[i] != '\0'; ++i) {
        // Check if current position matches the find string
        int j = 0;
        for (; j < findLen; ++j) {
            if (source[i + j] != find[j])
                break;
        }
        // If find string found, replace it with replace string
        if (j == findLen) {
            // Shift characters to the right if replacement string is longer
            if (replaceLen > findLen) {
                for (int k = sourceLen + (replaceLen - findLen); k >= i + findLen; --k)
                    source[k] = source[k - (replaceLen - findLen)];
            }
            // Replace the find string with replace string
            for (int k = 0; k < replaceLen; ++k)
                source[i + k] = replace[k];
            // Update sourceLen if necessary
            sourceLen = (sourceLen - findLen) + replaceLen;
        }
    }
}

int main() {
    char source[] = "This is test time";
    const char *find = "is";
    const char *replace = "was";

    printf("Source: %s\n", source);
    printf("Find: %s\n", find);
    printf("Replace: %s\n", replace);

    findAndReplace(source, find, replace);

    printf("Output: %s\n", source);

    return 0;
}

