#include <stdio.h>

int main()
{
    int nums[3][3] = {{}, {}, {}}; // [row] [col]

    // manually inputing values
    // nums[0][0] = 1;
    // nums[0][1] = 2;
    // nums[0][2] = 3;

    // input values using terminal
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &nums[i][j]);
        }
    }

    // printing 2D Array using nested-loop
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}