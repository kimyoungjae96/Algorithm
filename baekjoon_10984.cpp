#include <stdio.h>
#include <math.h>
int T;
int hakgi;
float course;
float score;
float sum;
float scoreSum;
int main()
{
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &hakgi);
        sum = 0;
        scoreSum = 0;
        for (int j = 0; j < hakgi; j++)
        {
            scanf("%f %f", &course, &score);
            sum += course;
            scoreSum += score * course;
        }
        printf("%d ", (int)sum);
        printf("%.1f\n", scoreSum / sum);
    }
}