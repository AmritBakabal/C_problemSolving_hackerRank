#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a, int b){
    return a > b ? a : b;
}
int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int manhatt = 0;
    int cx = n-1;
    int cy = n-1;

    for (int i = 0; i < (2 * n - 1); i++) {
        for (int j = 0; j < (2 * n - 1); j++) {

            int p = abs(i-cx);
            int q = abs(j-cy);
            int great = max(p,q);
            printf("%d ", great+1);
        }
        printf("\n");
    }
    return 0;
}