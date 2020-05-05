#include <stdio.h>
int hour, minute;
int main()
{
    scanf("%d %d", &hour, &minute);
    if ((hour * 60 + minute) - 45 < 0)
    {
        hour = 23;
        minute = 60 + (minute - 45);
        printf("%d %d", hour, minute);
        return 0;
    }
    printf("%d %d", ((hour * 60 + minute) - 45) / 60, ((hour * 60 + minute) - 45) % 60);
    return 0;
}