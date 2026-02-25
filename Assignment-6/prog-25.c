#include <stdio.h>
int main(){
    int n, l, c = 0;
    scanf("%d", &n);
    while (n!=0){
         l = n % 10;
        if (l==3 || l==5 || l==2 || l==7){
            c=c+1;
        }
        n=n/10;
    }printf("%d",c);
}
