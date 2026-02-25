#include <stdio.h>
int main()
{
    int x,a,b,sum=0,temp=0;
    for (x = 10; x <= 99; x++)
    {
    loop:
        if (x<=99)
        {
            temp=x;
            a=x%10;
            //printf("%d\n",a);
            b=x/10;
            //printf("%d\n",b);
            sum=a+b;
            if(sum==6 && (temp%2==0)){
                printf("%d\n",temp);
            }
            x++;
            goto loop;
            
        }
    }
}