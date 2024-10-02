//new
#include <stdio.h>

void copyString(char *destination, const char *source) {
    while (*source) {
        *destination++ = *source++;
    }
    *destination = '\0';
}

void concatenateStrings(char *destination, const char *source) {
    while (*destination) {
        destination++;
    }
    while (*source) {
        *destination++ = *source++;
    }
    *destination = '\0';
}
int compareStrings(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main() {
    char str1[100], str2[100], result[200];
    int comparisonResult;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    int len1 = 0;
    while (str1[len1] != '\0' && str1[len1] != '\n') {
        len1++;
    }
    str1[len1] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    int len2 = 0;
    while (str2[len2] != '\0' && str2[len2] != '\n') {
        len2++;
    }
    str2[len2] = '\0';

    copyString(result, str1);
    printf("Copied string: %s\n", result);

    concatenateStrings(result, str2);
    printf("Concatenated string: %s\n", result);
    comparisonResult = compareStrings(str1, str2);
    if (comparisonResult == 0) {
        printf("The strings are equal.\n");
    } else if (comparisonResult < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}