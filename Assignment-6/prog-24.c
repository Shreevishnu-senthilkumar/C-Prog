#include <stdio.h>
int main(){
    int n, last, prev, num, c = 0;
    scanf("%d", &n);
    last = n % 10;
    n = n / 10;
    while (n!=0){
        prev = n%10;
        num = prev*10+last;
        if (num==16 || num==25 || num==36 || num==49 || num==64 || num==81){
            c=c+1;
        }last=prev;
        n=n/10;
    }printf("%d",c);
}
