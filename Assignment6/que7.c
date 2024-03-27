#include <stdio.h>

void decimalToRoman(int value, char* result) {
    struct RomanValue {
        int value;
        char const* numeral;
    };

    static const struct RomanValue romanValues[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"},
        {0, NULL} // Sentinel value to mark end of array
    };

    *result = '\0'; // Ensure string is initially empty

    for (const struct RomanValue* current = romanValues; current->value > 0; ++current) {
        while (value >= current->value) {
            strcat(result, current->numeral);
            value -= current->value;
        }
    }
}


