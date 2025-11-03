//1. Check Even or Odd
#include <stdio.h>
void CheckEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is Even Number", num);
    }
    else
    {
        printf("%d is Odd Number", num);
    }
}
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d", &number);

    CheckEvenOdd(number);
    return 0;

}
