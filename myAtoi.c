#include <string.h>
#include <stdlib.h>
#include <limits.h>

int myAtoi(char* s) {
    int l = strlen(s);
    if (l == 0) return 0;

    int sign = 1;    // Default sign is positive
    long result = 0; // Use long to handle overflow during processing
    int i = 0;

    // Step 1: Skip leading spaces
    while (s[i] == ' ') i++;

    // Step 2: Check for optional '+' or '-' sign
    if (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') sign = -1;
        i++;
    }

    // Step 3: Parse digits and handle overflow
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');

        // Step 4: Check for overflow
        if (result * sign < INT_MIN) return INT_MIN;
        if (result * sign > INT_MAX) return INT_MAX;

        i++;
    }

    // Step 5: If any non-digit characters are found, stop parsing (e.g., in "words and 987")
    if (i == 0 || (s[i] != ' ' && s[i] != '\0')) {
        return (int)(result * sign);
    }

    // Step 6: Return the final result with the appropriate sign
    return (int)(result * sign);
}