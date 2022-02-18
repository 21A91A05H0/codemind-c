#include<stdio.h>
int main()
{
    long int n,r,count=0;
    scanf("%ld",&n);
    while(n!=0)
    {
        r=n%10;
        count++;
        n=n/10;
    }
    if(count==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}