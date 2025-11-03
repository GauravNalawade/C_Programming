//1.Write a program which accept one number from user and print that number of even numbers on screen.
#include <stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }

    int i = 0;

    for (i = 1; i <= iNo * 2; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
}
int main()
{

    int iValue = 0;
    printf("Enter Number:");
    scanf("%d", &iValue);

    PrintEven(iValue);
    return 0;

}
