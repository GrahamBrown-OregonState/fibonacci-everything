#include <stdio.h>

void fibonacci(int n, int* fibonacci_seq) {
    if (n == 0) {
        return;
    } else if (n == 1) {
        fibonacci_seq[0] = 0;
    } else {
        fibonacci_seq[0] = 0;
        fibonacci_seq[1] = 1;
        for (int i = 2; i < n; i++) {
            fibonacci_seq[i] = fibonacci_seq[i - 1] + fibonacci_seq[i - 2];
        }
    }
}

int main() {
    printf("Enter num of fibonacci numbers you want: ");
    int n;
    scanf("%d", &n);
    int fibonacci_seq[n];
    fibonacci(n, &fibonacci_seq);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_seq[i]);
    }
    printf("\n");
}