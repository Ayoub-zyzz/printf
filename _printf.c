#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main()
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: factorial of a negative number is undefined.\n");
    }
    else {
        int result = factorial(num);
        printf("%d! = %d\n", num, result);
    }

    return 0;
}
