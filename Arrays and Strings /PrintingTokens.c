#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char* s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int length = strlen(s);
    // char space = ' ';
    // // Write your logic to print the tokens of the sentence here.
    // char arr[1001];
    // int j = 0;
    for (int i = 0; i < length; i++) {
         // printf("j = %d\n", j);
        if (s[i] == ' ') s[i] = '\n';
            // arr[j] = '\0';
            // printf("%s\n", arr);
            // j = 0;
        // } 
        // else {
        //     arr[j] = s[i];
        //     j++;
        // }
    }

    // arr[j] = '\0';
    printf("%s", s);
    return 0;
}