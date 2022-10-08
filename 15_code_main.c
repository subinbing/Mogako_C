#include <stdio.h>

void number(int n) {
    int i, j;
    for (i = 2; i <= n; i++) {
        for (j = 2; j <= i - 1; j++) {
            if (i % j == 0) 
                break;
        }
        if (i == j) 
            printf("%d ", i);       
    }
}
void main() {
    int num;
    scanf_s("%d", &num);
    number(num);
}
