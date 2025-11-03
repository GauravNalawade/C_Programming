#include <stdio.h>
int SumNonFact(int iNo)
{
    int i = 0;
    int Summation = 0;
    for (i = 1; i <= iNo; i++)
    {
        if ((iNo % i) != 0)
        {
            Summation = Summation + i;
        }
    }
    return Summation;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Numnber:");
    scanf("%d", &iValue);
    iRet = SumNonFact(iValue);
    printf("%d", iRet);
    return 0;
}