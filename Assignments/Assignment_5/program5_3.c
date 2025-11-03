//3. Check Leap Year
#include <stdio.h>
void CheckLeapYear(int year)
{
    if (year % 4 == 0)
    {
        printf("%d is Leap Year", year);
    }
    else
    {
        printf("%d is Not Leap Year", year);
    }
}
int main()
{
    int yr;
    printf("Enter Year:");
    scanf("%d", &yr);
    CheckLeapYear(yr);
    return 0;
}

