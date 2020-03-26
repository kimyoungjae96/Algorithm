#include <iostream>

int needLine;
int marketInfo;
int firstMin = 100000;
int secondMin = 100000;
int result = 1001;
int firstTempVal, secondTempVal;

int main()
{
    scanf("%d", &needLine);
    scanf("%d", &marketInfo);
    for (int i = 0; i < marketInfo; i++)
    {
        scanf("%d", &firstTempVal);
        scanf("%d", &secondTempVal);

        if (firstTempVal < firstMin)
        {
            firstMin = firstTempVal;
        }

        if (secondTempVal < secondMin)
        {
            secondMin = secondTempVal;
        }
    }

    if (firstMin > secondMin * 6) //첫번째 가격이 낱개로 산거보다 비쌀경우
    {
        result = needLine * secondMin;
    }
    else
    {
        //세트로 다산거랑 낱개 붙은거랑 비교!
        result = firstMin * (needLine / 6);
        result += (needLine % 6) * secondMin;
        if (result > (firstMin * ((needLine / 6) + 1)))
        {
            result = firstMin * ((needLine / 6) + 1);
        }
    }

    printf("%d", result);
    return 0;
}