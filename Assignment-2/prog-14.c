#include <stdio.h>
int main() {
    int n,a,b;
    printf("Enter a number: ");
    scanf("%d", &n);
    a=n/100;
    b=n%100;
   if(a==b)
   {
    printf("1");
   }
   else{
    printf("0");
   }
    }
