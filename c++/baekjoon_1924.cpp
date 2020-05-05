#include <iostream>

int month, dayTarget, monthTarget, calculateDay;
int tempMonth = 1;
int includeDay[13];
int main()
{
    scanf("%d %d", &monthTarget, &dayTarget);
    for (int month = 1; month <= 12; month++)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            includeDay[month] = 31;
        }
        else if (month == 2)
        {
            includeDay[month] = 28;
        }
        else
        {
            includeDay[month] = 30;
        }
    }

    while (monthTarget != tempMonth)
    {
        calculateDay += includeDay[tempMonth];
        tempMonth++;
    }
    if ((calculateDay + dayTarget) % 7 == 1)
        printf("MON");

    if ((calculateDay + dayTarget) % 7 == 2)
        printf("TUE");

    if ((calculateDay + dayTarget) % 7 == 3)
        printf("WED");

    if ((calculateDay + dayTarget) % 7 == 4)
        printf("THU");

    if ((calculateDay + dayTarget) % 7 == 5)
        printf("FRI");

    if ((calculateDay + dayTarget) % 7 == 6)
        printf("SAT");

    if ((calculateDay + dayTarget) % 7 == 0)
        printf("SUN");

    return 0;
}