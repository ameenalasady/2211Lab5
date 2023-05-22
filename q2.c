#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, den1, den2;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &den1, &num2, &den2);

    int num3 = num1 * den2 + num2 * den1;
    int den3 = den1 * den2;

    printf("The sum is %d/%d", num3, den3);
    return 0;
}
