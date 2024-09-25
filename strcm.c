#include <stdio.h>

int compareStrings(const char *str1, const char *str2) {
    int i = 0;

    // Iterate through both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        // Compare each character
        if (str1[i] != str2[i]) {
            return (str1[i] - str2[i]);
        }
        i++;
    }

    // If one of the strings is shorter
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0; // Strings are equal
    } else {
        return (str1[i] - str2[i]);
    }
}

int main() {
    char str1[] = "hello";
    char str2[] = "world";

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }

    return 0;
}
