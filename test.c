#include <stdio.h>
#include "sum.h"

int main() {
    if (add(2, 3) != 5) return 1;
    if (add(10, -4) != 6) return 1;
    if (add(0, 0) != 0) return 1;

    printf("All tests passed!\n");
    return 0;
}
