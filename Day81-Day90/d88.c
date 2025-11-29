//Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum Colors { RED, YELLOW, GREEN };

int main() {
    const char *names[] = { "RED", "YELLOW", "GREEN" };
    int numColors = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < numColors; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
