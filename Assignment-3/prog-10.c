#include <stdio.h>
int main() {
    int n,a,b;
    printf("Enter a number: ");
    scanf("%d", &n);
    a=n/10;
    b=n%10;
   if(a<b)
   {
    printf("Success");
   }
   else{
    printf("Failure");
   }
    }