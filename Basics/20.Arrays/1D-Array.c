#include <stdio.h>

int main()
{
    int nums[] = {10, 20, 30, 40, 50, 60};

    // printing array elemnt by index number
    printf("%d\n", nums[0]);

    // updating number using index number
    nums[0] = 100;
    printf("%d\n", nums[0]);

    // loop
    // for (int i = 0; i < 6; i++)              // fixed size
    // int size = sizeof(nums);                 // 24 bytes --> int(4bytes) + 6(elements)

    // size/length of array
    int size = sizeof(nums) / sizeof(nums[0]); // 24/4 -> 6
    for (int i = 0; i < size; i++)             // automatically calucating size
    {
        printf("%d ", nums[i]);
    }

    return 0;
}