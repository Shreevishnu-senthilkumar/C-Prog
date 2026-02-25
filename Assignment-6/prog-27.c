#include <stdio.h>
int main(){
    int n = 0;
    int d = 0;
    while (n < 100000){
        int c = 0;
        int s1 = n;  
        while (s1 != 0){
            int s = s1 % 10;
            c += s;
            s1 /= 10;
        }
        if (c == 14){
            d += 1;
        }
        n += 1; 
    }
    printf("%d", d);
}
