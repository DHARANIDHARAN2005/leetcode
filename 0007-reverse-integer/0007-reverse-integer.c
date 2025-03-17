#include <stdio.h>
#include <limits.h> 
int reverse(int x) {
    int temp = x;
    int c = 0, xx = 0;
    while (temp != 0) {
        temp /= 10;
        c++;
    }

    for (int i = 0; i < c; i++) {
        temp = x % 10;  
        x /= 10; 
        if (xx > INT_MAX / 10 || (xx == INT_MAX / 10 && temp > 7)) return 0;
        if (xx < INT_MIN / 10 || (xx == INT_MIN / 10 && temp < -8)) return 0;

        xx = xx * 10 + temp;
    }
    
    return xx;
}