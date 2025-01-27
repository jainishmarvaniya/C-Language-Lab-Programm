#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (i <= n) {
        if (i % 2 == 0) {
            sum -= i; 
        } else {
            sum += i; 
        }
        i++;
    }
    printf("The sum of the series 1 - 2 + 3 - 4 + ... + %d is: %d\n", n, sum);

}
