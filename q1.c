#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x;

    printf("Enter your value for x: ");

    scanf("%d", &x);

    long long int polynomial = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;

    printf("The value of the polynomial is %lld", polynomial);

    return 0;
}
