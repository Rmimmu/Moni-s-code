#include <stdio.h>

int main(void) {
    int A, B, C;
    char op, eq;

    // Read input in the format: A op B = C
    scanf("%d %c %d %c %d", &A, &op, &B, &eq, &C);

    int result;
    switch (op) {
        case '+': result = A + B; break;
        case '-': result = A - B; break;
        case '*': result = A * B; break;
        default:
            // If somehow an invalid operator is given, we can just say "No" or handle error.
            printf("No\n");
            return 0;
    }

    // Compare the computed result with C
    if (result == C) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
