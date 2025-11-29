//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

void printMessage(enum Status status) {
    switch (status) {
        case SUCCESS:
            printf("Operation succeeded\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
    }
}

int main() {
    char input[10];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    scanf("%s", input);

    enum Status status;

    if (strcmp(input, "SUCCESS") == 0) {
        status = SUCCESS;
    } else if (strcmp(input, "FAILURE") == 0) {
        status = FAILURE;
    } else if (strcmp(input, "TIMEOUT") == 0) {
        status = TIMEOUT;
    } else {
        printf("Invalid input\n");
        return 1;
    }

    printMessage(status);

    return 0;
}
