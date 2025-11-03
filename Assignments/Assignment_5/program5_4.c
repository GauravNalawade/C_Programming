#include <stdio.h>
void CheckNumberType(int num)
{
    if (num == 0)
    {
        printf("Zero");
    }
    else if (num > 0)
    {
        printf("positive");
    }
    else
    {
        printf("Negative");
    }
}
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d", &number);
    CheckNumberType(number);
    return 0;
}