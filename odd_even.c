#include <stdio.h>

int main()
{
    int a;
    printf("Enter a non-negative number: ");
    scanf("%d", &a);

    if(a == 0 || a == 1)
        printf("Special Number");

    else if(a < 0)
        printf("Please enter a non-negative number!");

    else if(a % 2 != 0)
        printf("Odd Number");
    else
        printf("Even Number");

    return 0;
}
