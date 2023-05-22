#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    char str[12];

    sprintf(str, "%d", num);

    printf("The reversal is: ");

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
