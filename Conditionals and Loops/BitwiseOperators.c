#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
        int a=0;
        int b=0; 
        int and, or, xor;
        int greaterAnd = 0, greaterOr = 0, greaterXor = 0;
    
      for (int i = 1; i < n; i++) {
        a = i;
        for (int j = i + 1; j <= n; j++) {
            b = j;
            //bitwise and, or , xor operations.
            and = a & b;
            or = a | b;
            xor = a ^ b;

            //checking for the condition of k
            if (and < k) {
                if (and > greaterAnd) {
                    greaterAnd = and;
                }
            }
            if (or < k) {
                if (or > greaterOr) {
                    greaterOr = or;
                }
            }
            if (xor < k) {
                if (xor > greaterXor) {
                    greaterXor = xor;
                }
            }
        }
    }
    printf("%d\n%d\n%d",greaterAnd,greaterOr,greaterXor);
    
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
