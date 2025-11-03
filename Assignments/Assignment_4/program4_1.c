//1.Write a program which accept number from user and display its multiplication of factors.
#include <stdio.h>
int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    for (i = 1; i <= iNo / 2; i++)
    {
        if (iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Numnber:");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);
    printf("%d", iRet);

    return 0;

}
