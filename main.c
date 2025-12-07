#include <stdio.h>
#include "sum.h"

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = add(a, b);
    printf("%d\n", sum);
    return 0;
}
