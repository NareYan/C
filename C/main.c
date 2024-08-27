#include <stdio.h>
#include <stdbool.h>
#define SIZE 10
// void triangle()
// {
//     int n; 
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; ++i)
//     {
//         for (int j = 0; j < i; ++j)
//         {
//             printf("*");
//         }
//         printf("\n"); 
//     }
// }

// bool isDublicated(int array[SIZE])
// {
//     // int arraysize = sizeof(array)/sizeof(array[0]);
//     for (int i = 0; i < SIZE; ++i)
//     {
//         for (int j = i + 1; j < SIZE; ++j)
//         {
//             if (array[i] == array[j])
//                 return true; 
//         }
//     }
//     return false;
// }
void ismonoton(int array[SIZE])
{
    bool isDecreasing = true; 
    bool isIncreasing = true; 
    for (int i = 0; i < SIZE; ++i)
    {
        if(array[i] < array[i+1])
            isDecreasing = false; 
        if (array[i] > array[i+1])
            isIncreasing = false; 
    }
    if (isDecreasing)
        printf("Decreasing"); 
    else if (isIncreasing)
        printf("Increasing");
    else   
        printf("None");

}
int main(void)
{
    // triangle();
    int array[SIZE] = {1, 80, 152, 160, 185, 200, 1000, 1805, 1806, 1906};
    // if(isDublicated(array))
    //     printf("True");
    // else
    //     printf("False");
    ismonoton(array);

    return 0; 
}