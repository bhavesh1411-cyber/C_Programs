#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";

    // ================= LIBRARY FUNCTIONS =================

    printf("---- Using Library Functions ----\n");

    printf("Length of str1: %d\n", (int)strlen(str1));

    char copy[50];
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);

    char combined[50];
    strcpy(combined, str1);
    strcat(combined, str2);
    printf("Concatenated string: %s\n", combined);

    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0)
        printf("str1 and str2 are equal\n");
    else
        printf("str1 and str2 are NOT equal\n");


    // ================= MANUAL OPERATIONS =================

    printf("\n---- Manual Operations (without library) ----\n");

    // ---- Manual length ----
    int len = 0;
    while (str1[len] != '\0') {
        len++;
    }
    printf("Manual length of str1: %d\n", len);

    // ---- Manual copy ----
    char manualCopy[50];
    int i = 0;
    while (str1[i] != '\0') {
        manualCopy[i] = str1[i];
        i++;
    }
    manualCopy[i] = '\0';   // don't forget the null terminator
    printf("Manual copy: %s\n", manualCopy);

    // ---- Manual concatenation ----
    char manualCombined[50];
    i = 0;
    while (str1[i] != '\0') {
        manualCombined[i] = str1[i];
        i++;
    }
    int j = 0;
    while (str2[j] != '\0') {
        manualCombined[i] = str2[j];
        i++;
        j++;
    }
    manualCombined[i] = '\0';
    printf("Manual concatenation: %s\n", manualCombined);

    // ---- Manual compare ----
    int equal = 1;   // assume equal until proven otherwise
    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }
    if (str1[i] != str2[i])   // catches different lengths
        equal = 0;

    if (equal)
        printf("Manual compare: strings are equal\n");
    else
        printf("Manual compare: strings are NOT equal\n");

    // ---- Manual reverse ----
    char reversed[50];
    int strLen = 0;
    while (str1[strLen] != '\0') {
        strLen++;
    }
    for (i = 0; i < strLen; i++) {
        reversed[i] = str1[strLen - 1 - i];
    }
    reversed[strLen] = '\0';
    printf("Manual reverse of str1: %s\n", reversed);

    return 0;
}