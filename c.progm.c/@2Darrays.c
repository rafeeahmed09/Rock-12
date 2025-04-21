#include <stdio.h>
int main()
{
    int arrys[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arrys[i][j]);
        }
        printf("\n");
    }

    //// 2Darrayswithtranspirt

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", arrys[i][j]);
        }
        printf("\n");
    }
}
