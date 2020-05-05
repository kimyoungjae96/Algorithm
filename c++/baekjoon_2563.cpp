#include <stdio.h>
int arr[101][101];
int paperNum;
int width, height;
int sum;
int main()
{
    scanf("%d", &paperNum);
    for (int i = 0; i < paperNum; i++)
    {
        scanf("%d %d", &width, &height);
        for (int j = height - 1; j < height + 9; j++)
        {
            for (int k = width - 1; k < width + 9; k++)
            {
                arr[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}