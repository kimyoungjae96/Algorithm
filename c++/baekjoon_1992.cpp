#include <iostream>

int VideoSize;
int VideoValue;
int VideoInfo[64][64];
int TypeChk;
bool DifferentChk;

void QuadTree(int VideoSize, int x, int y)
{
    if (VideoSize == 1)
    {
        printf("%d", VideoInfo[y][x]);
        return;
    }

    DifferentChk = false;
    TypeChk = VideoInfo[y][x];
    for (int i = y; i < y + VideoSize; i++)
    {
        for (int j = x; j < x + VideoSize; j++)
        {
            if (TypeChk != VideoInfo[i][j])
            {
                DifferentChk = true;
                break;
            }
        }
        if (DifferentChk)
        {
            break;
        }
    }

    if (DifferentChk)
    { //다른게 있는경우
        printf("(");
        QuadTree(VideoSize / 2, x, y);
        QuadTree(VideoSize / 2, x + (VideoSize / 2), y);
        QuadTree(VideoSize / 2, x, y + (VideoSize / 2));
        QuadTree(VideoSize / 2, x + (VideoSize / 2), y + (VideoSize / 2));
        printf(")");
    }
    else
    {
        printf("%d", TypeChk);
    }
}
int main()
{
    scanf("%d", &VideoSize);

    for (int i = 0; i < VideoSize; i++)
    {
        for (int j = 0; j < VideoSize; j++)
        {
            scanf("%1d", &VideoValue);
            VideoInfo[i][j] = VideoValue;
        }
    }
    QuadTree(VideoSize, 0, 0);
    return 0;
}