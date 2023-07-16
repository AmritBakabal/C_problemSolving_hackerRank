#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* array[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    int start, end;
    int temp;
    int length = sizeof(array) / sizeof(array[0]);
    scanf("%d\n%d", &start, &end);
    for (int i = start; i <= end; i++) {
        if (start >= 1 && start <= 9) {
            printf("%s\n", array[i - 1]);
        }
        
        if (start != end) {
            start++;
        }
    } 
    if(end >length){
        int calc = end - length;
        for(int i =0 ; i <calc ; i++){
            int a = length+1;
            length++;
           if (a % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
        }
    }
    return 0;
}
