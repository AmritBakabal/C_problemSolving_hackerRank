#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int* array;
    char num[1001];
    int out[10];
    for (int i = 0; i < 10; i++)
        out[i] = 0;
    scanf("%s", num);
    int length = strlen(num);
    for (int i = 0; i < length; i++) {
        // using switch:
        switch (num[i]) {
        case '0':
            out[0]++;
            break;
        case '1':
            out[1]++;
            break;
        case '2':
            out[2]++;
            break;
        case '3':
            out[3]++;
            break;
        case '4':
            out[4]++;
            break;
        case '5':
            out[5]++;
            break;
        case '6':
            out[6]++;
            break;
        case '7':
            out[7]++;
            break;
        case '8':
            out[8]++;
            break;
        case '9':
            out[9]++;
            break;
        default:
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ",out[i]);
    }
    return 0;
}
