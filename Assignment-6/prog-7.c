#include<stdio.h>
int main()
{
    int x = 10;
    while (x<=99)
    {
    int c=x;
    int a=x%10;
    int b=x/10;
    int sum=a+b;
    if(sum==7 && (c%2!=0)){
        printf("%d\n",c);
}x++;
}
}