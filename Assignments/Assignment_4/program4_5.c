//5.Write a program which accept number from user and return difference between summation of all its factors and non factors.
#include <stdio.h>
int FactDiff(int iNo)
{
    int i = 0;
    int FactSummation = 0;
    int NonFactSummation = 0;

    for (i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            FactSummation += i;
        }
        else
        {
            NonFactSummation += i;
        }
    }
    return FactSummation - NonFactSummation;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Numnber:");
    scanf("%d", &iValue);
    iRet = FactDiff(iValue);
    printf("%d", iRet);
    return 0;

}
