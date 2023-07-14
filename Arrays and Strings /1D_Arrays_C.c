#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int arr[n] -> static array
// int *arr = (int*)malloc(n * sizeof(int)) -> dynamic array.
// free(arr) -> deallocate the memory.
int main()
{
    int n;
    int sum = 0;
    scanf("%d\n", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d\n", &arr[i]);
    }
    for (int j = 0; j < n; j++) {
        sum += arr[j];
    }
    printf("%d", sum);
    return 0;
}